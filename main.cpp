#include <iostream>
#include "Question.hpp"
#include "QuestionHandler.hpp"
#include <vector>
#include "QuestionResult.hpp"

int main(){
   std::vector<QuestionResult> questions = {{
      {
         "What does tamago mean in Japanese?",
         {
            "Potato",
            "Salad",
            "Egg",
            "Bread"
         },
         2
      }
   }};

   QuestionHandler::ask_question(questions[0]);

   std::cout << questions[0].correct << std::endl;
}