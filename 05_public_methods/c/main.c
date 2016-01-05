#include <stdio.h>
#include "point.h"

int main(int argc, char **argv)
{
	Point *point = point_new();

	point_set_value(point, 1, 1);

	printf("x=%d, y=%d\n", point_get_x(point), point_get_y(point));

	return 0;
}
