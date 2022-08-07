#include<iostream>

#include "Computer.h"
using namespace std;


Computer::Computer()
{
	move_computer = "R";
}



string Computer::makeMove()
{
	return move_computer;
}

