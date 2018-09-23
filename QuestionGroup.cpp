#include "QuestionGroup.hpp"
#include "QuestionHandler.hpp"

void QuestionGroup::ask_all_questions(){
   for (auto i = begin(); i != end(); i++)
      QuestionHandler::ask_question(*i);
}