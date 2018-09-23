#pragma once
#include <vector>

struct Question{
   const char* question;
   std::vector<const char*> answers;
   const char* correct_answer;
};