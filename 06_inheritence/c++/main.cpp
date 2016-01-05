#include "iostream"

#include "Point3D.h"

int main(int argc, char **argv)
{
	Point3D* point3d = new Point3D();

	point3d->setValue(1, 2, 3);

	std::cout << "x=" << point3d->getx() << ", y=" << point3d->gety() << ", z=" << point3d->getz() << std::endl;

	return 0;
}
