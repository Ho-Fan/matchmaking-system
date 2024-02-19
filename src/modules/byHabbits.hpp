#ifndef BYHABBITS_HPP
#define BYHABBITS_HPP

#include "matchmakingStrategy.hpp"


class ByHabbits : MatchmakingStrategy
{
private:

public:
	std::unique_ptr<Individual> match(std::unique_ptr<Individual>& matchmaker, std::vector<std::unique_ptr<Individual>>& individuals, const bool& reverse) override;
};

#endif // !BYHABBITS_HPP
