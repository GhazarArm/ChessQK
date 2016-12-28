#include "Queen.h"
#include <iostream>
using std::cout;
using std::cin;

int main () 
{
	Figure *figure;
	Queen queen;
	
	figure = &queen;
	
	Position pos(0,0,white,true);	
	figure->Move(pos);

	//figure->Move(Position(0,0,white,true));


	return 0;
}
