#include "iostream"

#include "Point.h"

int main(int argc, char **argv)
{
	Point *point = new Point();

	point->setValue(1, 1);

	std::cout << "x=" << point->getx() << ", y=" << point->gety() << std::endl;

	return 0;
}
