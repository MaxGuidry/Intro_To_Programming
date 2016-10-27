#pragma once

class Position
{
public:
	Position() {}
	Position(float xx, float yy) :x(xx), y(yy) {}
private:
	float x, y;
};