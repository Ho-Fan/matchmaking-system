#include "byDistance.hpp"

float ByDistance::get_distance(std::shared_ptr<Individual>& matchmaker, std::shared_ptr<Individual>& matchmaked)
{
    float makerX = static_cast<float>(matchmaker->get_coord().get_x());
    float makerY = static_cast<float>(matchmaker->get_coord().get_y());
    float makedX = static_cast<float>(matchmaked->get_coord().get_x());
    float makedY = static_cast<float>(matchmaked->get_coord().get_y());

    return std::sqrt(std::pow(makerX - makedX, 2) + pow(makedY - makerY, 2));
}

std::shared_ptr<Individual> ByDistance::match(std::shared_ptr<Individual>& matchmaker, std::vector<std::shared_ptr<Individual>>& individuals, const bool& reverse)
{
    std::shared_ptr<Individual> bestMatchmaked;

    float minDistance = std::numeric_limits<int>::max();
    float maxDistance = 0;

    for (std::shared_ptr<Individual>& matchmaked : individuals)
    {
        if (matchmaked == matchmaker) { continue; }

        float tempDistance = get_distance(matchmaker, matchmaked);
        if (reverse == false && tempDistance < minDistance) {
            minDistance = tempDistance;
            bestMatchmaked = matchmaked;
        }
        else if (reverse == true && tempDistance > maxDistance) {
            maxDistance = tempDistance;
            bestMatchmaked = matchmaked;
        }
    }
    return bestMatchmaked;
}
