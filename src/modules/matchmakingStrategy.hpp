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
	virtual std::unique_ptr<Individual> match(std::unique_ptr<Individual>& matchmaker, std::vector<std::unique_ptr<Individual>>& individuals, const bool& reverse) = 0;
};

#endif
