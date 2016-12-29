#include "Queen.h"
#include "Knight.h"
using namespace std;
int main () 
{
	Figure* figure;

	int your_wanted_problem;
	cin>>your_wanted_problem;

	if(your_wanted_problem == 1)
	{
		Position start_pos(4 , 5 , black);
		figure = new Queen(start_pos);
	}
	else
	{
		figure = new Knight(4 , 5);
	}

	figure->Problem();
	figure->Show();
	return 0;
}