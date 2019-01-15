#include "pch.h"
#include <iostream>
#include "Player.h"
#include <string>

using namespace std;

void Player::wrongQ(Question *wrongQ) {
	//Question* newPointer = new Question(wrongQ);
	//Since the pointer is created in this class, when does it get deleted?
	wrongAnswers.push_back(wrongQ);
	wrong++;

}

void Player::rightQ(Question *rightQ) {
	//Question* newPointer = new Question(rightQ);
	rightAnswers.push_back(rightQ);
	right++;

}

void Player::setName(string Name) {
	name = Name;
}

vector<Question*> Player::getWrong() {
	return wrongAnswers;
}

vector<Question*> Player::getRight() {
	return rightAnswers;
}

string Player::getName() {
	return name;
}

void Player::printWrong() {

	for (int i = 0; i < wrong; i++) {
		
		cout << i+1 << ". " << wrongAnswers[i]->getQuestion() << endl;
		//delete wrongAnswers[i];//deleting pointers in vectors 
	}
	wrongAnswers.clear();
	wrong = 0;
}

void Player::printRight() {
	
	for (int j = 0; j < right; j++) {
		cout << j+1<< ". " << rightAnswers[j]->getQuestion() << endl;
		//delete rightAnswers[j];// deleting pointers in vectors
	}
	rightAnswers.clear();
	right = 0;

}

int Player::getRightSize() {

	return rightAnswers.size();
}

int Player::getWrongSize() {

	return wrongAnswers.size();
}

