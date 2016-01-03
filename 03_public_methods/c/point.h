#include <glib-object.h>

#define TYPE_POINT	(point_get_type())

typedef struct _Point
{
	GObject parent_instance;
} Point;

typedef struct _PointClass
{
	GObjectClass parent_class;
} PointClass;

Point* point_new(void);

void point_set_value(Point *point, int x, int y);
int point_get_x(Point *point);
int point_get_y(Point *point);
