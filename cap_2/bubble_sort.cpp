#include <iostream>
#include <vector>
#include "../utils/utils.hpp"

using namespace std;

vector<int> bubble_sort(vector<int>);

int main()
{
    int n;
    cin >> n;
    vector<int> arr = fill_arr(n);
    vector<int> sorted_arr = bubble_sort(arr);
    print_arr(sorted_arr);
    return 0;
}

vector<int> bubble_sort(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = arr.size() - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]); // built-in
                // int temp = arr[j];
                // arr[j] = arr[j - 1];
                // arr[j - 1] = temp;
            }
        }
    }
    return arr;
}