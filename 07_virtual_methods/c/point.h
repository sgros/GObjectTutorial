#include <glib-object.h>

#define TYPE_POINT	(point_get_type())
G_DECLARE_DERIVABLE_TYPE(Point, point, , POINT, GObject)

typedef struct _PointClass
{
	GObjectClass parent_class;

	void (*set_value) (Point *self, int x, int y);
	int (*get_x) (Point *self);
	int (*get_y) (Point *self);

} PointClass;

Point* point_new(void);

void point_set_value(Point* self, int x, int y);
int point_get_x(Point* self);
int point_get_y(Point* self);

