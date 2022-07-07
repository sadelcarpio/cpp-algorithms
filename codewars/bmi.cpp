#include <string>
#include <iostream>

using namespace  std;

std::string bmi(double w, double h);

int main() {
    double w, h;
    cin >> w;
    cin >> h;
    cout << bmi(w, h) << endl;
    return 0;
}

std::string bmi(double w, double h)
{
    double bodyMassIndex = w / (h * h);
    cout << bodyMassIndex << endl;
    if (bodyMassIndex <= 18.5) return "Underweight";
    else if (bodyMassIndex <= 25.0) return "Normal";
    else if (bodyMassIndex <= 30.0) return "Overweight";
    else return "Obese";
}
