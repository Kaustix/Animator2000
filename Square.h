#ifndef __SQUARE_H
#define __SQUARE_H

#include "Shape.h"

class Square : public Shape {
private:
	double sl; //squares side length

public:
	/// initialize a triange that can be animated
	/** \param o the origin of the drawing, in pixels
		\param s the speed vector, in pixels per second
		\param _sl the side length for x&y sides of the square in double
	*/
	Square(Point o, Vector s, double _sl);

	void draw();

	double bBoxMaxX();
	double bBoxMaxY();
	double bBoxMinX();
	double bBoxMinY();
};

#endif