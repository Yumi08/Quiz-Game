#include <iostream>
#include "Question.hpp"
#include "QuestionHandler.hpp"
#include <vector>
#include "QuestionResult.hpp"
#include "QuestionGroup.hpp"
#include <json/reader.h>
#include <fstream>
#include <string>
#include <streambuf>

void setup(){
   srand(time(0));
}

void import_questions(){
   std::ifstream questions_file("questions.json", std::ios::in | std::ios::ate);
   std::string file_text;

   questions_file.seekg(0, std::ios::end);
   file_text.reserve(questions_file.tellg());
   questions_file.seekg(0, std::ios::beg);

   file_text.assign(std::istreambuf_iterator<char>(questions_file),
   std::istreambuf_iterator<char>());

   
}

int main(){
   setup();
   import_questions();

   QuestionGroup questions;
   questions.push_back({
      {
         "What does tamago mean in Japanese?",
         {
            "Potato",
            "Salad",
            "Egg",
            "Bread"
         },
         "Egg"
      }
   });
   questions.push_back({
      {
         "How do you say potato in Japanese?",
         {
            "Ore",
            "Jagaimo",
            "Watashi",
            "Suru",
            "Tamago"
         },
         "Jagaimo"
      }
   });

   QuestionHandler::show_correct_answer = true;
   questions.shuffle_questions = true;
   questions.ask_all_questions();
}