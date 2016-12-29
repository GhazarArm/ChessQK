#include "Queen.h"

int main () 
{
	Figure* f;
	int your_wanted_problem;
	cin>>your_wanted_problem;
	
	Position start_pos(0 , 0 , black);

	if(your_wanted_problem == 1)
	{
		
		f = new Queen(start_pos);
	}
	else 
	if(your_wanted_problem == 0)
	{
		f = new Knight(start_pos);
	}

	f->problem();
	f->show();

	return 0;
}
