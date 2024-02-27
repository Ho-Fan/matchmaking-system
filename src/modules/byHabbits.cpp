#include "byHabbits.hpp"

int ByHabbits::get_intersection_num(const std::vector<std::string>& matchmakerHabbits, const std::vector<std::string>& matchmakedHabbits)
{
    std::sort(matchmakerHabbits.begin(), matchmakerHabbits.end());
    std::sort(matchmakedHabbits.begin(), matchmakedHabbits.end());

    std::vector<std::string> intersection;
    std::set_intersection(matchmakerHabbits.begin(), matchmakerHabbits.end(), matchmakedHabbits.begin(), matchmakedHabbits.end(), std::back_inserter(intersection));
    return intersection.size();
}

std::shared_ptr<Individual> ByHabbits::match(std::shared_ptr<Individual>& matchmaker, std::vector<std::shared_ptr<Individual>>& individuals, const bool& reverse)
{
    return std::shared_ptr<Individual>();
}
