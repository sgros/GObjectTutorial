#include <glib-object.h>

#define TYPE_POINT	(point_get_type())
G_DECLARE_DERIVABLE_TYPE(Point, point, , POINT, GObject)

// Don't need this if using G_DECLARE_DERIVABLE_TYPE
// typedef struct _Point Point;
//
//struct _Point
//{
//	GObject parent_instance;
//};

typedef struct _PointClass
{
	GObjectClass parent_class;

	void (*point_set_value)(Point *point, int x, int y);
	int (*point_get_x)(Point *point);
	int (*point_get_y)(Point *point);

	gpointer _padding[10];
} PointClass;

GType point_get_type(void);

Point* point_new(void);

void point_set_value(Point *point, int x, int y);
int point_get_x(Point *point);
int point_get_y(Point *point);
