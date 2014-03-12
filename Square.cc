#include "Square.h"
#include <allegro5/allegro_primitives.h>

Square::Square(Point o, Vector s, double _sl) : 
	Shape(o, s), sl(_sl) {
}

void Square::draw() {
	al_draw_rectangle(origin.X(), origin.Y(), origin.X() + sl, origin.Y() + sl, 
		al_map_rgb(200, 200, 0), 3);
}

double Square::bBoxMaxX() {
	return sl;
}

double Square::bBoxMaxY() {
	return sl;
}

double Square::bBoxMinX() {
	return 0;
}

double Square::bBoxMinY() {
	return 0;
}