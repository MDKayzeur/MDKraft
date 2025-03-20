#pragma once
#include "Vector.h"

class Transform {
	public :	
		Transform() : position(new Vector3()), rotation(new Vector3()), scale(new Vector3()) {};
		Transform(Vector3* pos, Vector3* rot, Vector3* scale) : position(pos), rotation(rot), scale(scale) {};
		Vector3* position;
		Vector3* rotation;
		Vector3* scale;


};