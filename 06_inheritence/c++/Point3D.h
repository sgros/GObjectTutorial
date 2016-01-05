#include "Point.h"

class Point3D: public Point
{
private:
	int z;
public:
	void setValue(int x, int y, int z);
	int getz(void);
};
