#ifndef HUMAN_H
#define HUMAN_H
#include<iostream>
#pragma once
using namespace std;

class Human
{
	public:
		Human();
		void setMove(string human);
		string makeMove();
		
	private:
		string move_human;
};

#endif


	