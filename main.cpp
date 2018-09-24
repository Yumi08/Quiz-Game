#include <iostream>
#include "Question.hpp"
#include "QuestionHandler.hpp"
#include <vector>
#include "QuestionResult.hpp"
#include "QuestionGroup.hpp"
#include <fstream>
#include <string>
#include <streambuf>
#include <nlohmann/json.hpp>
#include <string>

void setup(){
   srand(time(0));
}

QuestionGroup import_questions(){
   using json = nlohmann::json;

   std::ifstream questions_file("questions.json", std::ios::in | std::ios::ate);
   std::string file_text;

   questions_file.seekg(0, std::ios::end);
   file_text.reserve(questions_file.tellg());
   questions_file.seekg(0, std::ios::beg);

   file_text.assign(std::istreambuf_iterator<char>(questions_file),
   std::istreambuf_iterator<char>());

   QuestionGroup qg;

   auto questions_json = json::parse(file_text);

   // std::cout << questions_json[0].at("Question").begin()->get<std::string>() << std::endl;

   for (auto i = questions_json.begin(); i != questions_json.end(); i++){
      qg.push_back(QuestionResult{Question{
      (*i).at("Question").begin()->get<std::string>(),
      (*i).at("Answers"),
      (*i).at("Correct_Answer").begin()->get<std::string>()}});
   }

   return qg;
}

int main(){
   setup();
   auto questions = import_questions();

   questions.ask_all_questions();
}