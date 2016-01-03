#include <stdio.h>

#include "point.h"

typedef struct _PointPrivate PointPrivate;

G_DEFINE_TYPE (Point, point, G_TYPE_OBJECT);

typedef struct _PointPrivate PointPrivate;
 
struct _PointPrivate {
	int x, y;
};

static void
point_class_init (PointClass* klass)
{
	printf("In point_class_init()\n");
	g_type_class_add_private (klass, sizeof (PointPrivate));
}

static void
point_init (Point* self)
{
	printf("In point_init()\n");
}

Point* point_new(void)
{
	return g_object_new(TYPE_POINT, NULL);
}
