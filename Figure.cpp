#include"Figure.h"

Figure::Figure(Position& pos) : position(&pos){};

Figure::Figure() : position(nullptr){};

Figure::~Figure() 
{//delete of figure position 
 	delete position;
}