#include <iostream>
#include <vector>
#include "../utils/utils.hpp"

using namespace std;

vector<int> insertion_sort(vector<int>);
vector<int> inverse_insertion_sort(vector<int>);

int main() {
    int n;
    vector<int> arr, sorted_arr;
    cin >> n;
    arr = fill_arr(n);
    sorted_arr = inverse_insertion_sort(arr);
    print_arr(sorted_arr);
    return 0;
}

/**
 * @brief Ordena un arreglo de forma ascendente con insertion sort (izq. a der.)
 * 
 * @param arr es el arreglo a ordenar
 * @return el arreglo ordenado
 */
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

/**
 * @brief Ordena un arreglo de forma ascendente con insertion sort (der. a izq.)
 * 
 * @param arr es el arreglo a ordenar
 * @return el arreglo ordenado 
 */
vector<int> inverse_insertion_sort(vector<int> arr) 
{
    for (int j = arr.size() - 2; j >= 0; j--)
    {
        int key = arr[j];
        int i = j + 1;
        while (i < arr.size() && arr[i] < key)
        {
            arr[i - 1] = arr[i];
            i++;
        }
        arr[i - 1] = key; 
    }
    return arr;
}
