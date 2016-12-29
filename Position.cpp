#include "Position.h"

void Position::ChangePositionSituation()
{
	status = !status;
} 

bool Position::FreeOrNot()
{
	return status;
}

int Position::GetRow()
{
	return rows;
}

int Position::GetCol()
{
	return column;
}

Color Position::GetColor()
{
	return color;
}

