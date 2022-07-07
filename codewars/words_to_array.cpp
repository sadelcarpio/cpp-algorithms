#include <string>
#include <iostream>
#include <vector>
#include "../utils/utils.hpp"

using namespace  std;

vector<string> stringToArray(const string& s);

int main() {
    string oracion;
    getline(cin, oracion);
    vector<string> resultArr = stringToArray(oracion);
    print_arr<string>(resultArr);
    return 0;
}

vector<string> stringToArray(const string& s)
{
    vector<string> result;
    string word;
    for (auto elem: s + ' ') {
        if (elem != ' ') word += elem;
        else {
            result.push_back(word);
            word = "";
        }
    }
    return result;
}
