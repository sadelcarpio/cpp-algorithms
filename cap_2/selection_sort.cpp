#include <iostream>
#include <vector>

using namespace std;

vector<int> selection_sort(vector<int>);
vector<int> fill_arr(int);

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
