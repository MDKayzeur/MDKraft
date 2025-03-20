#pragma once

class Vector2 {
public:
	Vector2() { Zero(); };
	Vector2(int x, int y) : x(x), y(y) {};

	int x;
	int y;

	Vector2 Zero() const;
	Vector2 Up() const;
	Vector2 Down() const;
	Vector2 Right() const;
	Vector2 Left() const;
};

class Vector3 {
public :
	Vector3() { Zero(); };
	Vector3(int x, int y, int z) : x(x), y(y), z(z) {};

	int x;
	int y;
	int z;

	Vector3 Zero() const;
	Vector3 Up() const;
	Vector3 Down() const;
	Vector3 Right() const;
	Vector3 Left() const;
	Vector3 Forward() const;
	Vector3 Back() const;
};