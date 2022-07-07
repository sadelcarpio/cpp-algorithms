#include <string>
#include <iostream>
#include <array>
#include "../utils/utils.hpp"

int points(const std::array<std::string, 2>& games) {
    int points = 0;
    for (const auto & game : games) {
        int x = game[0] - '0';
        int y = game[2] - '0';
        if (x > y) points += 3;
        else if (x == y) points += 1;
    }
    return points;
}

int main() {
    std::array<std::string, 2> games = {"3:1", "2:2"};
    cout << points(games) << endl;
    return 0;
}
