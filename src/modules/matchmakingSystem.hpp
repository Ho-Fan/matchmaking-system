#ifndef MATCHMAKINGSYSTEM_HPP
#define MATCHMAKINGSYSTEM_HPP

#include "individual.hpp"
#include "matchmakingStrategy.hpp"


class MatchmakingSystem
{
private:

public:
	void match(std::vector<std::unique_ptr<Individual>>& individuals, MatchmakingStrategy& strategy, bool reverse);
};


#endif