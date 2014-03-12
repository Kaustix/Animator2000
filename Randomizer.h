#ifndef __RANDOMIZER_H
#define __RANDOMIZER_H

#include <time.h>
#include <math.h>
#include "2DGeom.h"


int randomNumber(int min, int max) {
	return (rand()%(max-min))+min;
}

int randomShapes() {
	return floor(randomNumber(6, 20)/3);
}

Point randomOrigin(const Display& d){
	return Point(randomNumber(0, d.getW()-100), randomNumber(0, d.getH()-100));
}

Vector randomSpeed() {
	return Vector(randomNumber(-100, 100), randomNumber(-100, 100));
}

Vector randomVector() {
	return Vector(randomNumber(25, 100), randomNumber(25, 100));
}


#endif