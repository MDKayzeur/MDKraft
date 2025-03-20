#pragma once
#include "Material.h"
#include "CubeData.h"

class Cube
{
	public : 
		Cube() : Size(1), C_Data(new CubeData()) {};
		explicit Cube(int p) : Position(p), Size(1) {};
		explicit Cube(int p, int s) : Position(p), Size(s) {};
		int Size;
		Vector Position;
		CubeData* C_Data;
		Cube DrawCube(int Position, int SIze);

	protected:
		auto DrawFace();
	
};