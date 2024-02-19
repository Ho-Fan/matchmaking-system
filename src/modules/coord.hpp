#ifndef COORD_HPP
#define COORD_HPP


class Coord
{
private:
	int x;
	int y;

public:
	Coord(int x, int y);
	~Coord();
	int get_x() const;
	int get_y() const;
};
#endif // !COORD_HPP