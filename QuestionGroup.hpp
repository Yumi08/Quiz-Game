#pragma once
#include <vector>
#include "QuestionResult.hpp"

class QuestionGroup : public std::vector<QuestionResult>{
   public:
   void ask_all_questions();
};