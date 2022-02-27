#include <iostream>
#include <vector>
#include "../cpp/functions.cpp"

using namespace std;

vector<int> selection_sort(vector<int>);

int main(int argc, char const *argv[])
{
    int n;
    vector<int> arr, sorted_arr; 
    cin >> n;
    arr = fill_arr(n);
    sorted_arr = selection_sort(arr);
    for (auto &&elem : sorted_arr)
    {
        cout << '[' << elem << ']';
    }
    return 0;
}

vector<int> selection_sort(vector<int> arr) 
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int key = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < key)
            {
                int temp = arr[j]; // swapping
                arr[j] = key;
                key = temp;
            }
        }
        arr[i] = key;
    }
    return arr;
}
