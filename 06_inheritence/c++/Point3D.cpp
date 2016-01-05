#include "Point3D.h"

void Point3D::setValue(int x, int y, int z)
{
	Point::setValue(x, y);
	this->z = z;
}

int Point3D::getz(void)
{
	return this->z;
}
