#include<iostream>
#include "Human.h"

using namespace std;

Human::Human()
{
	move_human = "R";
}

void Human::setMove(string human)
{
	move_human = human;
}
string Human::makeMove()
{
	return move_human;
}