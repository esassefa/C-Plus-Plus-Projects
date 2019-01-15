#pragma once
#include "Question.h"
#include <vector>
#include <memory>

using namespace std;
//using namespace
class Player
{
private:
	vector<Question*> wrongAnswers;
	vector<Question*> rightAnswers;
	string name;
	Question* qptr;
	int right;
	int wrong;
	//Player();
	//~Player();
public:
	void wrongQ(Question *wrongQ) ;
	void rightQ(Question *rightQ );
	void setName(string Name);
	vector<Question*> getWrong();
	vector<Question*> getRight();
	string getName();
	void printWrong();
	void printRight();
	int getRightSize();
	int getWrongSize();
};

