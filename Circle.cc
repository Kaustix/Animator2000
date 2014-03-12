#include "Circle.h"
#include <allegro5/allegro_primitives.h>

Circle::Circle(Point o, Vector s, double _r) :
	Shape(o, s), r(_r) {
}


void Circle::draw() {
	al_draw_circle(origin.X(), origin.Y(), r, al_map_rgb(0, 200, 200), 3);
}


double Circle::bBoxMaxX() {
	return r;
}

double Circle::bBoxMaxY() {
	return r;
}

double Circle::bBoxMinX() {
	return -r;
}

double Circle::bBoxMinY() {
	return -r;
}
