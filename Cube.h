#pragma once
#include "Material.h"
#include "CubeData.h"
#include "Vector.h"

class Cube
{
	public : 
		Cube() : Size(1), C_Data(new CubeData()) {};
		explicit Cube(Vector3* p) : Position(p), Size(1) {};
		explicit Cube(Vector3* p, int s) : Position(p), Size(s) {};
		Vector3* Position;
		int Size;
		CubeData* C_Data;
		void DrawCube(int Position, int SIze);

	protected:
		auto DrawFace();
	
};