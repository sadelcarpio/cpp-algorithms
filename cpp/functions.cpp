#include <iostream>
#include <vector>

using namespace std;

vector<int> fill_arr(int n) 
{
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }
    return arr;
}