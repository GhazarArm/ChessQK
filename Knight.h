#include "Figure.h"
#include "Board.h"
#include<vector>
class Knight : public Figure
{
private:
	//this is my chess board
	Board board;
	//here i save moves
	vector<Position*> moves;
public:
	//Constructors
	Knight(Position& pos) : Figure(pos){};
	Knight(int , int);
	//   end Constructors
	//this is function Move figure to gets position
	virtual void Move(Position&);
	//return true if our knight can move this is position
	virtual bool CanMoveToCell(Position&);
	//if there is inaccessible cell return true else return false
	bool IsTherClosedCell();
	//this function get is moves sequence
	virtual void Problem();
	//now i show knight moves
	virtual void Show();
	//destructor
	virtual ~Knight();
};
