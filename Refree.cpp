#include<iostream>
#include "Refree.h"

using namespace std;

Refree::Refree(){
	Human_player1 = "R";
	Computer_player2 = "R";
	}
	
string Refree::refGame(string player1, string player2)
{	
	Human_player1 = player1;
	Computer_player2 = player2;
	if(Human_player1 == "R" && Computer_player2 == "R")
	{
		result = "T";
		return result;
	}
	
	else if(Human_player1 == "H" && Computer_player2 == "R")
	{
		result = "W";
		return result;
	}
	
	else if(Human_player1 == "S" && Computer_player2 == "R")
	{
		result = "L";
		return result;
	}
	
}