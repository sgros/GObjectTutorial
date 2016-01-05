#include <stdio.h>
#include "point3d.h"

int main(int argc, char **argv)
{
	Point3D *point3d = point3d_new();

	point3d_set_value(point3d, 1, 2, 3);

	printf("x=%d, y=%d, z=%d\n", point3d_get_x(point3d), point3d_get_y(point3d),  point3d_get_z(point3d));

	return 0;
}
