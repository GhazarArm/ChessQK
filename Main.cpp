//Main.cpp
#include <iostream>

#include "Queen.h"
using namespace std;

int main ()
{
	Figure* figure;

	int your_wanted_problem;
	std::cout << "Press 0 for Knight , 1 for Queen: " ;
	std::cin>>your_wanted_problem;

	if(your_wanted_problem == 1)
	{
		Position start_pos(0 , 0 , black);
		Queen queen(start_pos);
		figure = &queen;
	}
	else if (your_wanted_problem == 0)
	{
		//figure = new Knight(4 , 5);
		std::cout << '0' << endl;
	}

	figure->Problem();
	//figure->Show();
	return 0;
}



