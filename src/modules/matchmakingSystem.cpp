#include "matchmakingSystem.hpp"

void MatchmakingSystem::match(std::vector<std::shared_ptr<Individual>>& individuals, MatchmakingStrategy& strategy, bool reverse)
{
	for (std::shared_ptr<Individual> matchmaker : individuals)
	{
		std::shared_ptr<Individual> matchmaked = strategy.match(matchmaker, individuals, reverse);
		matchmaked -> match(matchmaked);
	}
}
