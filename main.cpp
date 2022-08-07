#include<iostream>
#include "Human.h"
#include "Computer.h"
#include "Refree.h"

using namespace std;

int main()
{
	Human h1;
	Computer c1;
	Refree r1;
	
	string move1;
	string move2;
	string result;
	
	cout << "Enter move: ";
	cin >> move1;
	
	h1.setMove(move1);
	move1 = h1.makeMove();
	move2 = c1.makeMove();
	
	result = r1.refGame(move1, move2);
	
	cout << result <<endl;
	
	return 0;
	
}
	
