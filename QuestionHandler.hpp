#pragma once
#include "Question.hpp"

class QuestionHandler{
   public:

   static const char* correct_answer_message;
   static const char* incorrect_answer_message;

   static bool ask_question(Question question);
};