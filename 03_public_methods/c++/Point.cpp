#include "Point.h"

void Point::setValue(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Point::getx(void)
{
	return this->x;
}

int Point::gety(void)
{
	return this->y;
}
