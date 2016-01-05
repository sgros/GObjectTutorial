#include <glib-object.h>

#define TYPE_POINT	(point_get_type())
G_DECLARE_DERIVABLE_TYPE(Point, point, , POINT, GObject)

typedef struct _PointClass
{
	GObjectClass parent_class;
} PointClass;

GType point_get_type(void);
