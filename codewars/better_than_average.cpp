#include <vector>
#include "../utils/utils.hpp"

bool betterThanAverage(const std::vector<int>& classPoints, int yourPoints);

int main() {
    int n;
    cin >> n;
    std::vector<int> points = fill_arr(n);
    int myPoints;
    cin >> myPoints;
    cout << betterThanAverage(points, myPoints) << endl;
    return 0;
}

bool betterThanAverage(const std::vector<int>& classPoints, int yourPoints) {
    int i = 0, sum = 0;
    for (auto elem: classPoints) {
        sum += elem;
        i++;
    }
    double avg = (double) sum / i;
    cout << avg << endl;
    if (yourPoints > avg) return true;
    else return false;
}