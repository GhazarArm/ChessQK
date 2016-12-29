#ifndef knight_h
#define knight_h
#include "Figure.h"
#include "Board.h"
#include<vector>

class Knight : public Figure
{
private:
	Board board;
	vector<Position*> moves;
public:
	//Constructors
	Knight(Position& pos) : Figure(pos){};
	Knight(int , int);
	//   end Constructors

	//this is function Move figure to gets position
	void Move(Position&);

	//return true if our knighet can move this is position
	bool CanMoveToCell(const Position&);

	//if ther is inaccessible cell return true else return false
	bool IsTherClosedCell();

	//this function get is moves sequence
	void Problem();

	void Print();
};

#endif