#include "Vector.h"

Vector2 Vector2::Zero() const
{
    return Vector2(0, 0);
}

Vector2 Vector2::Up() const
{
    return Vector2(0, 1);
}

Vector2 Vector2::Down() const
{
    return Vector2(0, -1);
}

Vector2 Vector2::Right() const
{
    return Vector2(1, 0);
}

Vector2 Vector2::Left() const
{
    return Vector2(-1, 0);
}

Vector3 Vector3::Zero() const
{
    return Vector3(0, 0, 0);
}

Vector3 Vector3::Up() const
{
    return Vector3(0, 1, 0);
}

Vector3 Vector3::Down() const
{
    return Vector3(0, -1, 0);
}

Vector3 Vector3::Right() const
{
    return Vector3(1, 0, 0);
}

Vector3 Vector3::Left() const
{
    return Vector3(-1, 0, 0);
}

Vector3 Vector3::Forward() const
{
    return Vector3(0, 0, 1);
}

Vector3 Vector3::Back() const
{
    return Vector3(0, 0, -1);
}