#ifndef BYHABBITS_HPP
#define BYHABBITS_HPP

#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
#include "matchmakingStrategy.hpp"


class ByHabbits : MatchmakingStrategy
{
private:
	int get_intersection_num(const std::vector<std::string>& matchmakerHabbits, const std::vector<std::string>& matchmakedHabbits);

public:
	std::shared_ptr<Individual> match(std::shared_ptr<Individual>& matchmaker, std::vector<std::shared_ptr<Individual>>& individuals, const bool& reverse) override;
};

#endif // !BYHABBITS_HPP
