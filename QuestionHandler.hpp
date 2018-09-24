#pragma once
#include "Question.hpp"
#include "QuestionResult.hpp"
#include <string>

class QuestionHandler{
   private:
   QuestionHandler();

   public:
   static std::string correct_answer_message;
   static std::string incorrect_answer_message;
   static bool show_correct_answer;

   static bool ask_question(const Question &question);
   static void ask_question(QuestionResult &question);
};