#include "Display.h"
#include "ShapeSimulator.h"
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
#include "Randomizer.h"

int main(void) {
	Display disp;  // create a 800x600 window
	ShapeSimulator sim(disp, 100);  // 2nd arg = fps, 3rd arg = size
	srand(time(NULL));

	for (int i = 0; i <= randomShapes(); i++) {
		sim.addShape(new Triangle(randomOrigin(disp), randomSpeed(), randomVector(), randomVector()));
	}

	for (int i = 0; i <= randomShapes(); i++) {
		sim.addShape(new Square(randomOrigin(disp), randomSpeed(), randomNumber(10, 100)));
	}

	for (int i = 0; i <= randomShapes(); i++) {
		sim.addShape(new Circle(randomOrigin(disp), randomSpeed(), randomNumber(10, 50)));
	}

	sim.run();
}
