#include "point.h"

typedef struct _PointPrivate PointPrivate;

G_DEFINE_TYPE (Point, point, G_TYPE_OBJECT);

static void
point_class_init (PointClass* klass)
{
}

static void
point_init (Point* self)
{
}

Point* point_new(void)
{
	return g_object_new(TYPE_POINT, NULL);
}
