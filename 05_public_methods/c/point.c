#include <stdio.h>

#include "point.h"

typedef struct _PointPrivate PointPrivate;

G_DEFINE_TYPE (Point, point, G_TYPE_OBJECT);
 
struct _PointPrivate {
	int x, y;
};

#define POINT_GET_CLASS(object)		(G_TYPE_INSTANCE_GET_CLASS((object), TYPE_POINT, PointClass))
#define POINT_GET_PRIVATE(object)	(G_TYPE_INSTANCE_GET_PRIVATE((object), TYPE_POINT, PointPrivate))

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

void point_set_value(Point* point, int x, int y)
{
	PointPrivate* priv = POINT_GET_PRIVATE(point);

	priv->x = x;
	priv->y = y;
}

int point_get_x(Point* point)
{
	PointPrivate* priv = POINT_GET_PRIVATE(point);

	return priv->x;
}

int point_get_y(Point* point)
{
	PointPrivate* priv = POINT_GET_PRIVATE(point);

	return priv->y;
}

