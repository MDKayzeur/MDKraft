#pragma once
#include "Vector.h"

class Transform {
	public :	
		Transform() :position(new Vector3()), rotation(new Vector3()), scale(new Vector3()) {};
		Vector3* position;
		Vector3* rotation;
		Vector3* scale;

};