#include "QuestionGroup.hpp"
#include "QuestionHandler.hpp"
#include <iostream>
#include <algorithm>

bool QuestionGroup::shuffle_questions = false;

void QuestionGroup::ask_all_questions(){
   if (shuffle_questions)
   std::random_shuffle(begin(), end());

   for (auto i = begin(); i != end(); i++)
   QuestionHandler::ask_question(*i);

   unsigned short percentage;
   unsigned int correct = 0;

   for (auto i = begin(); i != end(); i++)
   correct += (*i).correct;

   percentage = 100 * correct / size();

   std::cout << "You got " << correct << "/" << size() << "(" << percentage << "%)" << " questions correct!" << std::endl;
}