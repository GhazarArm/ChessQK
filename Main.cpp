#include "Queen.h"

int main () 
{
/*	Figure *figure;
	Queen queen;
	
	figure = &queen;
	
	Position pos(0,0,white,true);	
	figure->Move(pos);

	//figure->Move(Position(0,0,white,true));
*/
	Figure* f;
	int a;
	cin>>a;
	if(a == 1)
	{
		Position start_pos(4 , 5 , black);
		f = new Queen(start_pos);
	}
	else
	{
		f = new Knight(4 , 5);
	}

	f->problem();

	return 0;
}
