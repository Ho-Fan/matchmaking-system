#ifndef INDIVIDUAL_HPP
#define INDIVIDUAL_HPP

#include <string>
#include <vector>
#include <memory>
#include "matchmakingSystem.hpp"
#include "coord.hpp"


class Individual
{
private:
	int id;						// > 0
	int gender;					// 0||1
	int age;					// >= 18 
	std::string intro;			// char[0..200]
	std::vector<std::string> habbits;
	Coord coord;
	std::shared_ptr<Individual> matchmaked;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               chmaked;

public:
	Individual(int id, int gender, int age, std::string& intro, std::vector<std::string>& habbits, const Coord& coord);
	~Individual();
	std::shared_ptr<Individual> get_matchmaked() const;
	void match(std::shared_ptr<Individual> matchmaked);
};

#endif // !INDIVIDUAL_HPP