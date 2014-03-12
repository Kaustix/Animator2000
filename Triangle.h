#ifndef __TRIANGLE_H
#define __TRIANGLE_H

#include "Shape.h"

class Triangle: public Shape {
private:
	Vector a;
	Vector b; // vectors to the vertices of the triangle

public:
	/// initializing a triangle that can be animated
	/**
		 \param o the origin of the drawing, in pixels
		 \param s the speed vector, in pixels per second
		 \param _a vector pointing to one vertex of the triangle when the
		 vector is centred at the origin
		 \param _b vector pointing to the other vertex of the triangle 
	 */
	Triangle(Point o, Vector s, Vector _a, Vector _b);

	void draw();

	double bBoxMaxX();
	double bBoxMaxY();
	double bBoxMinX();
	double bBoxMinY();
};

#endif
