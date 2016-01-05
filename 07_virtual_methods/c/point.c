#include <stdio.h>

#include "point.h"

typedef struct _PointPrivate PointPrivate;

G_DEFINE_TYPE (Point, point, G_TYPE_OBJECT);
 
struct _PointPrivate {
	int x, y;
};

#define POINT_GET_CLASS(object)		(G_TYPE_INSTANCE_GET_CLASS((object), TYPE_POINT, PointClass))
#define POINT_GET_PRIVATE(object)	(G_TYPE_INSTANCE_GET_PRIVATE((object), TYPE_POINT, PointPrivate))

void point_private_set_value(Point* self, int x, int y)
{
	PointPrivate *priv = POINT_GET_PRIVATE(self);
	priv->x = x;
	priv->y = y;
}

int point_private_get_x(Point* self)
{
	PointPrivate *priv = POINT_GET_PRIVATE(self);
	return priv->x;
}

int point_private_get_y(Point* self)
{
	PointPrivate *priv = POINT_GET_PRIVATE(self);
	return priv->y;
}

static void
point_class_init (PointClass* klass)
{
	g_type_class_add_private (klass, sizeof (PointPrivate));

	klass->set_value = point_private_set_value;
	klass->get_y = point_private_get_y;
	klass->get_x = point_private_get_x;
}

static void
point_init (Point* self)
{
}

Point* point_new(void)
{
	return g_object_new(TYPE_POINT, NULL);
}

void point_set_value(Point* self, int x, int y)
{
	PointClass *klass = _POINT_GET_CLASS(self);

	klass->set_value(self, x, y);
}

int point_get_x(Point* self)
{
	PointClass *klass = _POINT_GET_CLASS(self);

	return klass->get_x(self);
}

int point_get_y(Point* self)
{
	PointClass *klass = _POINT_GET_CLASS(self);

	return klass->get_y(self);
}

