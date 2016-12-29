#include "Queen.h"

int main () 
{
	Figure* f;
	int your_wanted_problem;
	cin>>your_wanted_problem;
	if(your_wanted_problem == 1)
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
