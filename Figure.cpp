#include "Figure.h"

Figure::Figure(const Position& pos) : position(&pos)
{}

Figure::Figure() : position(nullptr)
{};

Figure::~Figure() 
{
	delete position;
}
