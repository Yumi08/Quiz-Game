#include "QuestionHandler.hpp"
#include <iostream>

bool QuestionHandler::ask_question(Question question){
   std::cout << question.question << std::endl;
   for (auto i = question.answers.begin(); i != question.answers.end(); i++){
      std::cout << i - question.answers.begin() + 1 << " - " << *i << std::endl;
   }
   unsigned int answer;
   std::cin >> answer;

   if (answer == question.correct_answer + 1)
      return 1;
   
   return 0;
}