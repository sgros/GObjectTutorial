#include <stdio.h>

#include "point3d.h"

typedef struct _Point3DPrivate Point3DPrivate;

G_DEFINE_TYPE (Point3D, point3d, TYPE_POINT);
 
struct _Point3DPrivate {
	int z;
};

#define POINT3D_GET_CLASS(object)	(G_TYPE_INSTANCE_GET_CLASS((object), TYPE_POINT3D, Point3DClass))
#define POINT3D_GET_PRIVATE(object)	(G_TYPE_INSTANCE_GET_PRIVATE((object), TYPE_POINT3D, Point3DPrivate))

static void
point3d_class_init (Point3DClass* klass)
{
	printf("In point3d_class_init()\n");
	g_type_class_add_private (klass, sizeof (Point3DPrivate));
}

static void
point3d_init (Point3D* self)
{
	printf("In point3d_init()\n");
}

Point3D* point3d_new(void)
{
	return g_object_new(TYPE_POINT3D, NULL);
}

void point3d_set_value(Point3D* point, int x, int y, int z)
{
	Point3DPrivate* priv = POINT3D_GET_PRIVATE(point);

	priv->z = z;
}

int point3d_get_z(Point3D* point)
{
	Point3DPrivate* priv = POINT3D_GET_PRIVATE(point);

	return priv->z;
}
