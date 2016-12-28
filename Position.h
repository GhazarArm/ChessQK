#ifndef Position_h
#define Position_h

#include "Enums.h"

class Position
{
private:
	Color color;
	int rows;
	int column;
	bool free;
public:
	Position(){}
	Position(int _column ,int _rows ,  Color col , bool onCell) 
	: column(_column), rows(_rows)  , color(col) ,  free(onCell)
	{}
	void ChangePositionSituation();
	bool FreeOrNot();
	int GetRow();
	int GetCol();
	Color GetColor();
};


#endif
