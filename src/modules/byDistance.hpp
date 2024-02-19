#ifndef BYDISTANCE_HPP
#define BYDISTANCE_HPP

#include "matchmakingStrategy.hpp"


class ByDistance: MatchmakingStrategy
{
private:

public:
	std::unique_ptr<Individual> match(std::unique_ptr<Individual>& matchmaker, std::vector<std::unique_ptr<Individual>>& individuals, const bool& reverse) override;
};

#endif // !BYDISTANCE_HPP
