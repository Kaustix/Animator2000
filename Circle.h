#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "Shape.h"

class Circle: public Shape {
private:
	double r; // the circles raidius 

public:
	/// initialize a circle that can be animated
	/** \param o the origin of the drawing in pixels
		\param s the speed vector, in pixels per second
		\param _r the radius of the circle
	*/
	Circle(Point o, Vector s, double _r);

	void draw();

	double bBoxMaxX();
	double bBoxMaxY();
	double bBoxMinX();
	double bBoxMinY();
};

#endif