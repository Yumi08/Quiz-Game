#include "QuestionHandler.hpp"
#include <iostream>

const char* QuestionHandler::correct_answer_message = "Correct!";
const char* QuestionHandler::incorrect_answer_message = "Incorrect!";

bool QuestionHandler::ask_question(Question question){
   std::cout << question.question << std::endl;
   for (auto i = question.answers.begin(); i != question.answers.end(); i++){
      std::cout << i - question.answers.begin() + 1 << " - " << *i << std::endl;
   }
   unsigned int answer;
   std::cin >> answer;

   if (answer == question.correct_answer + 1){
      std::cout << correct_answer_message << std::endl;
      return 1;
   }
   
   std::cout << incorrect_answer_message << std::endl;
   return 0;
}