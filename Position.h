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
	//Defoult constructor
	Position(){}
	//contsructor get row,column, and color of figure
	Position(int _column ,int _rows ,  Color col) : column(_column), rows(_rows)  , color(col) ,  free(false)
	{}
	//
	void ChangePositionSituation();

	bool FreeOrNot();

	int GetRow();

	int GetCol();

	Color GetColor();
};


#endif
