#include "Position.h"

void Position::ChangePositionSituation()
{
	free = !free;
}
bool Position::FreeOrNot()
{
	return free;
}
int Position::GetRow()
{
	return rows;
}

int Position::GetCol()
{
	return column;
}

Color Position :: GetColor()
{
	return color;
}
