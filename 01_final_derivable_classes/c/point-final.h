#include <glib-object.h>

#define TYPE_POINT	(point_get_type())
G_DECLARE_FINAL_TYPE(Point, point, , POINT, GObject)

typedef struct _Point
{
	GObject parent_instance;
} Point;
