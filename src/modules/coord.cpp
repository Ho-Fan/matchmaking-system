#include "coord.hpp"


Coord::Coord(int x, int y) : x(x), y(y)
{
}

Coord::~Coord()
{
}

int Coord::get_x() const
{
	return x;
}

int Coord::get_y() const
{
	return y;
}
