//
//Figure abstract class
#ifndef figure_h
#define figure_h

#include "Position.h"
#include "Enums.h"

class Figure
{
protected:
	// the color of figure (black or white) 
	Color color;
	//
	Position* position;
public:
	//figure defoult constructor
	Figure(){}
	//figure costructor give  position addres 
	Figure(Position&);
	//move figure on position in board cell
	virtual void Move(const Position&) = 0 ;
	//
	virtual bool CanMoveToCell(const Position&) = 0 ;
	//
	virtual void Problem();
	//
	virtual void Show();
};

#endif
