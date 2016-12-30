#ifndef queen_h
#define queen_h

#include "Figure.h"


class Queen : public Figure
{
private:
	int count;
	int posvec[8];     //put positions in vector: index - row , valu - column
public:
	Queen() { count = 1; }
	Queen(Position& pos) : Figure(pos)
	{ count = 1; }
	void Move(Position&);
	bool CanMoveToCell(Position&);
	void Problem();
	void Show();
};

#endif 
