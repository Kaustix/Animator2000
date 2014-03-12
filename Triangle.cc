#include "Triangle.h"
#include <allegro5/allegro_primitives.h>


#define MAX(a, b) (((a) < (b)) ? (b) : (a))

#define MIN(a, b) (((a) > (b)) ? (b) : (a))

Triangle::Triangle(Point o, Vector s, Vector _a, Vector _b) : 
	Shape(o, s), a(_a), b(_b) {
}


void Triangle::draw() {
	Point A = origin + a;
	Point B = origin + b;  // get the vertices
	al_draw_triangle(origin.X(), origin.Y(), A.X(), A.Y(), B.X(), B.Y(),
									 al_map_rgb(200, 0, 200), 3);
}


double Triangle::bBoxMaxX() {
	return MAX(0, MAX(a.X(), b.X()));
}

double Triangle::bBoxMaxY() {
	return MAX(0, MAX(a.Y(), b.Y()));
}


double Triangle::bBoxMinX() {
	return MIN(0, MIN(a.X(), b.X()));
}


double Triangle::bBoxMinY() {
	return MIN(0, MIN(a.Y(), b.Y()));
}
