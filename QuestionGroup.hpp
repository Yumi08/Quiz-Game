#pragma once
#include <vector>
#include "QuestionResult.hpp"

class QuestionGroup : public std::vector<QuestionResult>{
   public:
   static bool shuffle_questions;

   void ask_all_questions();
};