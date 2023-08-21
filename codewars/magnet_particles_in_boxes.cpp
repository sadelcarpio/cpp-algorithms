#include <cmath>
#include <iostream>

class Magnets {
public:
    static double doubles(int maxk, int maxn);

private:
    static double box_force(int k, int n);
};

double Magnets::doubles(int maxk, int maxn) {
    double total_force = 0.f;
    for (int k = 1; k < maxk + 1; ++k) {
        for (int n = 1; n < maxn + 1; ++n) {
           total_force += box_force(k, n);
        }
    }
    return total_force;
}

double Magnets::box_force(int k, int n) {
    return 1 / (k * std::pow((n + 1), 2 * k));
}
