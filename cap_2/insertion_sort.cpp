#include <iostream>
#include <vector>

using namespace std;

vector<int> insertion_sort(vector<int>);
vector<int> inverse_insertion_sort(vector<int>);
vector<int> fill_arr(int);

int main(int argc, char const *argv[])
{
    int n;
    vector<int> arr, sorted_arr; 
    cin >> n;
    arr = fill_arr(n);
    sorted_arr = inverse_insertion_sort(arr);
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

vector<int> insertion_sort(vector<int> arr) 
{
    for (int j = 1; j < arr.size(); j++)
    {
        int key = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
    return arr;
}

vector<int> inverse_insertion_sort(vector<int> arr) 
{
    for (int j = arr.size() - 2; j >= 0; j--)
    {
        int key = arr[j];
        int i = j + 1;
        while (j < arr.size() && arr[i] < key)
        {
            arr[i - 1] = arr[i];
            i++;
        }
        arr[i - 1] = key; 
    }
    return arr;
}

