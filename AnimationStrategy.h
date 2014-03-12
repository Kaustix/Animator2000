#ifndef __ANIMATIONS_H
#define __ANIMATIONS_H

#include "2DGeom.h"

class AnimationStrategy {
public:
	/// determines the next position of the shape in the animation
	/** \param crt is the current positon of the shape
		\param dt is the time interval measured in seconds from the present
						to which the new position of the shape must be calculated
		\return the new positon of the shape
	*/
	Point nextPosition(Point crt, doublt dt);
};

#endif