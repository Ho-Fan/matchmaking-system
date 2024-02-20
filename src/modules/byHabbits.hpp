#ifndef BYHABBITS_HPP
#define BYHABBITS_HPP

#include "matchmakingStrategy.hpp"


class ByHabbits : MatchmakingStrategy
{
private:

public:
	std::shared_ptr<Individual> match(std::shared_ptr<Individual>& matchmaker, std::vector<std::shared_ptr<Individual>>& individuals, const bool& reverse) override;
};

#endif // !BYHABBITS_HPP
