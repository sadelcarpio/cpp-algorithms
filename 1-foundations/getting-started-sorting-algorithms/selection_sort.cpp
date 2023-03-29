#include <iostream>
#include <vector>
#include "../../utils/utils.hpp"

using namespace std;

vector<int> selection_sort(vector<int>);

int main()
{
    int n;
    vector<int> arr, sorted_arr; 
    cin >> n;
    arr = fill_arr(n);
    sorted_arr = selection_sort(arr);
    print_arr(sorted_arr);
    return 0;
}

/**
 * @brief Ordena un arreglo de forma ascendente con selection sort
 * 
 * @param arr es el arreglo a ordenar
 * @return el arreglo ordenado
 */
vector<int> selection_sort(vector<int> arr) 
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int key = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < key)
            {
                swap(arr[j], key); // built-in
                // int temp = arr[j]; // swapping
                // arr[j] = key;
                // key = temp;
            }
        }
        arr[i] = key;
    }
    return arr;
}
