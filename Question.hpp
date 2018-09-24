#pragma once
#include <vector>
#include <string>

struct Question{
   std::string question;
   std::vector<std::string> answers;
   std::string correct_answer;
};