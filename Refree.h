#ifndef REFREE_H
#define REFREE_H
#include<iostream>
#pragma once
using namespace std;

class Refree
{
	public:
		Refree();
		string refGame(string Human_player1, string Computer_player2);
		
	private:
		string Human_player1;
		string Computer_player2;
		string result;
		
};

#endif