#include "individual.hpp"


Individual::Individual(int id, int gender, int age, std::string& intro, std::vector<std::string>& habbits, const Coord& coord) :
	id(id), age(age), intro(intro), habbits(habbits), coord(coord)
{
	matchmaked = nullptr;
}

Individual::~Individual()
{
}

Coord Individual::get_coord() const
{
	return coord;
}

std::vector<std::string> Individual::get_habbits()
{
	return habbits;
}

std::shared_ptr<Individual> Individual::get_matchmaked() const
{
	return matchmaked;
}

void Individual::match(std::shared_ptr<Individual> matchmaked)
{
	this -> matchmaked = matchmaked;
}


