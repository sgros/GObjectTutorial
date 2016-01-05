#include <stdio.h>

#include "point.h"

typedef struct _PointPrivate PointPrivate;

G_DEFINE_TYPE (Point, point, G_TYPE_OBJECT);
 
struct _PointPrivate {
	int x, y;
};

static void
point_class_init (PointClass* klass)
{
	g_type_class_add_private (klass, sizeof (PointPrivate));
}

static void
point_init (Point* self)
{
}

Point* point_new(void)
{
	return g_object_new(TYPE_POINT, NULL);
}
