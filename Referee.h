#ifndef REFEREE_H
#define REFEREE_H
#include<iostream>
#pragma once
using namespace std;

class Referee
{
	public:
		Referee();
		string refGame(string Human_player1, string Computer_player2);
		
	private:
		string Human_player1;
		string Computer_player2;
		string result;
		
};

#endif