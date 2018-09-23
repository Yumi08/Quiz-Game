#include "QuestionGroup.hpp"
#include "QuestionHandler.hpp"
#include <iostream>

void QuestionGroup::ask_all_questions(){
   for (auto i = begin(); i != end(); i++)
   QuestionHandler::ask_question(*i);

   unsigned short percentage;
   unsigned int correct = 0;

   for (auto i = begin(); i != end(); i++)
   correct += (*i).correct;

   percentage = 100 * correct / size();

   std::cout << "You got " << correct << "/" << size() << "(" << percentage << "%)" << " questions correct!" << std::endl;
}