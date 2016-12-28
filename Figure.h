//
//Figure abstract class
#ifndef figure_h
#define figure_h

#include "Position.h"
#include "Enums.h"

class Figure
{
protected:
	Color color;
	Position* position;
public:
	Figure(){}
	Figure(Position& pos);
	virtual void Move(Position& pos) = 0 ;
	virtual bool CanMoveToCell(Position& pos) = 0 ;
	
};

#endif
