#pragma once
#include <string>

using namespace std;
class Question
{

private:
	string question;
	char answer1 = 'A';
	 string a1;
	char answer2 = 'B';
	 string a2;
	char answer3 = 'C';
	 string a3;
	char answer4 = 'D';
	 string a4;
	 char correctAnswer;
	 char user;

public:
	void setQuestion(string q);
	void setAnswers(string ans1, string ans2, string ans3, string ans4, char correct);
	string getQuestion();
	string gets1();
	string gets2();
	string gets3();
	string gets4();
	char getcorrect();
	void printAnswers();
	bool guess(char userAnswer);
	char getGuess();
	bool correct(char);
	
	//~Question();


};


