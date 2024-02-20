#include "byDistance.hpp"

std::shared_ptr<Individual> ByDistance::match(std::shared_ptr<Individual>& matchmaker, std::vector<std::shared_ptr<Individual>>& individuals, const bool& reverse)
{
    if (reverse == false)
    {
        int distanceMIn = std::numeric_limits<int>::max();
        for (std::shared_ptr<Individual> matchmaked : individuals)
        {
            if (matchmaked == matchmaker)
                continue;

            if 
        }
    }
}
