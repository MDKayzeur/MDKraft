#pragma once
#include "Vector.h"


class Vertice {
public:
	Vertice() : posA(new Vector3), posB(new Vector3), posC(new Vector3) {};

	Vector3* posA;
	Vector3* posB;
	Vector3* posC;

	Vertice DrawVertice(Vertice v1, Vertice v2, Vertice v3);
};