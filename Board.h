#ifndef Board_h
#define Board_h

#include <iostream>
#include "Position.h"
using namespace std;
class Board
{
private:
	Position* board[8][8];

	void CreatBoard();
public:
	Board();
	~Board();

	//if all board cells closed return true else return false
	bool BoardFull();
	Position* GetBoardCell(int , int );
};

#endif 
