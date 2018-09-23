#include "QuestionHandler.hpp"
#include <iostream>
#include <string>
#include <algorithm>

const char* QuestionHandler::correct_answer_message = "Correct!";
const char* QuestionHandler::incorrect_answer_message = "Incorrect!";

bool QuestionHandler::ask_question(const Question &question){
   std::cout << question.question << std::endl;
   for (auto i = question.answers.begin(); i != question.answers.end(); i++){
      std::cout << i - question.answers.begin() + 1 << " - " << *i << std::endl;
   }

   unsigned int answer;
   input:
   try{
      std::string temp;
      std::getline(std::cin, temp); 
      answer = std::stoi(temp);
   }
   catch(...){
      answer = UINT32_MAX;
      std::cout << "You must enter a numeric value." << std::endl;
      goto input;
   }

   if (question.answers[answer - 1] == question.correct_answer){
      std::cout << correct_answer_message << std::endl;
      return true;
   }
   
   std::cout << incorrect_answer_message << std::endl;
   return false;
}

void QuestionHandler::ask_question(QuestionResult &question){
   std::random_shuffle(question.question.answers.begin(), question.question.answers.end());

   std::cout << question.question.question << std::endl;
   for (auto i = question.question.answers.begin(); i != question.question.answers.end(); i++){
      std::cout << i - question.question.answers.begin() + 1 << " - " << *i << std::endl;
   }

   unsigned int answer;
   input:
   try{
      std::string temp;
      std::getline(std::cin, temp); 
      answer = std::stoi(temp);
   }
   catch(...){
      answer = UINT32_MAX;
      std::cout << "You must enter a numeric value." << std::endl;
      goto input;
   }

   if (question.question.answers[answer - 1] == question.question.correct_answer){
      std::cout << correct_answer_message << std::endl;
      question.correct = true;
      return;
   }
   
   std::cout << incorrect_answer_message << std::endl;
   question.correct = false;
}