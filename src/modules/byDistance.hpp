#ifndef BYDISTANCE_HPP
#define BYDISTANCE_HPP

#include <limits>	
#include "matchmakingStrategy.hpp"


class ByDistance: MatchmakingStrategy
{
private:
	
public:
	std::shared_ptr<Individual> match(std::shared_ptr<Individual>& matchmaker, std::vector<std::shared_ptr<Individual>>& individuals, const bool& reverse) override;
};

#endif // !BYDISTANCE_HPP
