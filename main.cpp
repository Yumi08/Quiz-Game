#include <iostream>
#include "Question.hpp"
#include "QuestionHandler.hpp"
#include <vector>
#include "QuestionResult.hpp"
#include "QuestionGroup.hpp"

void setup(){
   srand(time(0));
}

int main(){
   setup();

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

   questions.shuffle_questions = true;
   questions.ask_all_questions();
}