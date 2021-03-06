#ifndef queen_h
#define queen_h

#include "Figure.h"


class Queen : public Figure
{
private:
	int count;
	int posvec[8];//put positions in vector: index - row , valu - column
	void ShowBoard();
public:
	Queen() { count = 1; }
	Queen(const Position& pos) : Figure(pos)
	{}
	void Move(const Position& pos);
	bool CanMoveToCell(const Position& pos);
	void Problem();
	void Show();
};

#endif 