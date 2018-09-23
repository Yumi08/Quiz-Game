#include <iostream>
#include "Question.hpp"
#include "QuestionHandler.hpp"

int main(){
   Question q{
      "What does tamago mean in Japanese?",
      {
         "Potato",
         "Salad",
         "Egg",
         "Bread"
      },
      2
   };

   std::cout << QuestionHandler::ask_question(q) << std::endl;
}