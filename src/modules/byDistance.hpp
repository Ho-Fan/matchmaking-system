#ifndef BYDISTANCE_HPP
#define BYDISTANCE_HPP

#include <limits>
#include <cmath>
#include "matchmakingStrategy.hpp"


class ByDistance: MatchmakingStrategy
{
private:
	float get_distance(std::shared_ptr<Individual>& matchmaker, std::shared_ptr<Individual>& matchmaked);

public:
	std::shared_ptr<Individual> match(std::shared_ptr<Individual>& matchmaker, std::vector<std::shared_ptr<Individual>>& individuals, const bool& reverse) override;
};

#endif // !BYDISTANCE_HPP
