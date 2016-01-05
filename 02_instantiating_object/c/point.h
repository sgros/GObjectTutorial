#include <glib-object.h>

#define TYPE_POINT	(point_get_type())

typedef struct _PointClass
{
	GObjectClass parent_class;
} PointClass;

typedef struct _Point
{
	GObject parent_instance;
} Point;

GType point_get_type(void);

Point* point_new(void);
