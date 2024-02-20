#ifndef MATCHMAKINGSTRATEGY_HPP
#define MATCHMAKINGSTRATEGY_HPP

#include "matchmakingSystem.hpp"
#include "byHabbits.hpp"
#include "byDistance.hpp"
#include "individual.hpp"


class MatchmakingStrategy
{
private:

public:
	virtual std::shared_ptr<Individual> match(std::shared_ptr<Individual>& matchmaker, std::vector<std::shared_ptr<Individual>>& individuals, const bool& reverse) = 0;
};

#endif
