#include <iostream>
#include <vector>
#include <cmath>
#include "../../utils/utils.hpp"

void merge(vector<int> &arr, int p, int q, int r, int &counter);
void merge_sort(vector<int> &arr, int p, int r, int &counter);
int find_inversions(vector<int> arr);

int main()
{
    int n;
    cin >> n;
    vector<int> arr = fill_arr(n);
    int n_invs = find_inversions(arr);
    print_arr(arr);
    cout << n_invs << endl;
    return 0;
}


/**
 * @brief Realiza la comparación entre dos arreglos ordenados para unirlos en uno
 * 
 * @param arr es el arreglo que contiene los dos arreglos ordenados
 * @param p es el índice inferior en el arreglo original
 * @param q es el índice que define la partición de los dos arreglos
 * @param r es índice superior en el arreglo original
 */
void merge(vector<int> &arr, int p, int q, int r, int &counter)
{
    int n1 = q - p + 1;
    int n2 = r - q; 
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[p + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[q + j + 1];
    }
    int i = 0, j = 0;
    for (int k = p; k < r + 1; k++)
    {
        if (L[i] <= R[j] && i < n1)
        {
            arr[k] = L[i];
            i++;
        }
        else if (L[i] > R[j] && j < n2)
        {
            arr[k] = R[j];
            counter += n1 - i;
            j++;
        }
        else if (j == n2)
        {
            arr[k] = L[i];
            i++;
        }
        else if (i == n1)
        {
            arr[k] = R[j];
            j++;
        }
    }
    
}

void merge_sort(vector<int> &arr, int p, int r, int &counter)
{
    if (p < r) // es necesario para cuando se llame merge_sort(arr, 0, 0)
    {
        int q = floor((float)(p + r) / 2);
        merge_sort(arr, p, q, counter);
        merge_sort(arr, q + 1, r, counter);
        merge(arr, p, q, r, counter);
    }
}

int find_inversions(vector<int> arr)
{
    int counter = 0;
    merge_sort(arr, 0, arr.size() - 1, counter);
    return counter;
}