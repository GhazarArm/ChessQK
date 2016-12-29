#include  "Queen.h"

#include <iostream>
using namespace std;


void Queen :: Problem()
{
	Position pos(0, 0, black);
	Move(pos);	
}

void Queen :: Move(Position& pos)
{
	if(pos.GetRow() == 8)
	{
		ShowBoard();
	}
	else
	{
		for (int i = 0; i < 8; i++)
		{
			 
			Position pos(i, pos.GetRow(), pos.GetColor());
			//Queen safe or not
			if(CanMoveToCell(pos))
			{
				//free cell -> false ,, the position row, column is now busy
				pos.ChangePositionSituation();
				//set in vector positions of safe queen
				posvec[pos.GetRow()] = i;
				//
				Position pos(0 , pos.GetRow() + 1 , pos.GetColor());
				//try place another Queen
				Move(pos);
			}

		}
	}
}

bool Queen :: CanMoveToCell(Position& pos)
{
	for(int i = 0 ; i < pos.GetRow(); ++i)
	{
		int other_row = posvec[i];

		if(other_row == pos.GetCol()					 //some row
		|| other_row == pos.GetCol() - pos.GetRow() + i  //same diagonal
		|| other_row == pos.GetCol() + pos.GetRow() - i) // same diagonal
		{
			return false;
		}
	}	

	return true;
}

void Queen :: Show()
{
		cout << count++ <<" :End of problem  " << endl;
		for(int i = 0 ; i < 8 ; ++i)
		{
			for(int j = 0; j < 8 ; ++j)
			{
				if(posvec[i] == j)
				{
					std::cout << " Q";
				}
				else
				{
					std::cout << " X";
				}
			}	
			std::cout << std::endl;
		}
		std::cout << std::endl;
}
