#pragma once
#include <vector>

struct Question{
   const char* question;
   std::vector<const char*> answers;
   unsigned int correct_answer;
};