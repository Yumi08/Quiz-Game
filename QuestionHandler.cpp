#include "QuestionHandler.hpp"
#include <iostream>

const char* QuestionHandler::correct_answer_message = "Correct!";
const char* QuestionHandler::incorrect_answer_message = "Incorrect!";

bool QuestionHandler::ask_question(Question &question){
   std::cout << question.question << std::endl;
   for (auto i = question.answers.begin(); i != question.answers.end(); i++){
      std::cout << i - question.answers.begin() + 1 << " - " << *i << std::endl;
   }
   unsigned int answer;
   std::cin >> answer;

   if (answer == question.correct_answer + 1){
      std::cout << correct_answer_message << std::endl;
      return true;
   }
   
   std::cout << incorrect_answer_message << std::endl;
   return false;
}

void QuestionHandler::ask_question(QuestionResult &question){
   std::cout << question.question.question << std::endl;
   for (auto i = question.question.answers.begin(); i != question.question.answers.end(); i++){
      std::cout << i - question.question.answers.begin() + 1 << " - " << *i << std::endl;
   }
   unsigned int answer;
   std::cin >> answer;

   if (answer == question.question.correct_answer + 1){
      std::cout << correct_answer_message << std::endl;
      question.correct = true;
      return;
   }
   
   std::cout << incorrect_answer_message << std::endl;
   question.correct = false;
}