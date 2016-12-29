//heder file for position class

#ifndef Position_h
#define Position_h
#include"Enums.h"

class Position
{
private:
	Color color;
	int rows;
	int column;
	bool free;
public:
	Position(int  _col, int _row , Color col) : rows(_row) , column(_col) , color(col) ,  free(true){};

	//if position free chang is not free and if position not free change is free 
	void ChangePositionSituation();

	bool FreeOrNot() const;

	int GetRow() const ;
	int GetCol() const ;
	Color GetColor() const ;
};

#endif
