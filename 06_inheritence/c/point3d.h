#include <glib-object.h>
#include "point.h"

#define TYPE_POINT3D	(point3d_get_type())

typedef struct _Point3D
{
	Point parent_instance;
} Point3D;

typedef struct _Point3DClass
{
	PointClass parent_class;
} Point3DClass;

GType point3d_get_type(void);

Point3D* point3d_new(void);

void point3d_set_value(Point3D* point, int x, int y, int z);
int point3d_get_z(Point3D* point);
