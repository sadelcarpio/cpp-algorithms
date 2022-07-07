#include <iostream>
#include <vector>
#include <cmath>
#include "../utils/utils.hpp"

using namespace std;

void merge(vector<int>&, int, int, int);
void merge_sort(vector<int>&, int, int);

int main()
{
    int n;
    cin >> n;
    vector<int> arr = fill_arr(n);
    print_arr(arr);
    merge_sort(arr, 0, arr.size() - 1); // se pasa el vector por referencia
    print_arr(arr);
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
void merge(vector<int> &arr, int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    vector<int> L, R;
    for (int i = 0; i < n1; i++)
    {
        L.push_back(arr[p + i]);
    }
    for (int j = 0; j < n2; j++)
    {
        R.push_back(arr[q + j + 1]);
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

/**
 * @brief Implementa el ordenamiento de un arreglo con el método de merge sort
 * 
 * @param arr es el arreglo a ordenar, es modificado por el arreglo ordenado
 * @param p es el índice inicial (0)
 * @param r es el índice final (n)
 */
void merge_sort(vector<int> &arr, int p, int r)
{
    if (p < r) // es necesario para cuando se llame merge_sort(arr, 0, 0)
    {
        int q = floor((p + r) / 2);
        merge_sort(arr, p, q);
        merge_sort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}
