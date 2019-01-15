#include "pch.h"
#include <iostream>
#include <string>
#include "Question.h"

using namespace std;



void Question::setQuestion (string q) {
	question = q;
}

void Question::setAnswers(string ans1, string ans2, string ans3, string ans4, char correct) {
	
	a1 = ans1;
	a2 = ans2;
	a3 = ans3;
	a4 = ans4;
	correctAnswer = correct;
}

string Question::getQuestion() {
	return question;
}

string Question::gets1() {
	return a1;
}

string Question::gets2() {
	return a2;
}
string Question::gets3() {
	return a3;
}
string Question::gets4() {
	return a4;
}
char Question::getcorrect() {
	return correctAnswer;
}


void Question::printAnswers() {
	cout << "A. " << a1 << endl;
	cout << "B. " << a2 << endl;
	cout << "C. " << a3 << endl;
	cout << "D. " << a4 << endl;
	
}

bool Question::guess(char userAnswer) {
	userAnswer = toupper(userAnswer);
	user = userAnswer;
	return correct(user);
}

char Question::getGuess() {
	return user;
}

bool Question::correct(char userAnswer) {
	
	if (user == correctAnswer) {
		return true;
	}
	else {
		return false;
	}
}



