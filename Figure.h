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
	Figure(const Position&);
	virtual void Move(const Position&) = 0 ;
	virtual bool CanMoveToCell(const Position&) = 0 ;
	virtual void Problem();
	virtual void Show();
};

#endif
