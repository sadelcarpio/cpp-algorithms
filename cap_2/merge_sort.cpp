#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include "../utils/utils.hpp"

using namespace std;

void merge(vector<int>&, int, int, int);
void merge_sort(vector<int>&, int, int);

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> arr = fill_arr(n);
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
    vector<int> L(n1 + 1), R(n2 + 1);
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[p + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[q + j + 1];
    }
    L[n1] = numeric_limits<int>::max(); // sentinelas, verifican que no se acabe el arreglo
    R[n2] = numeric_limits<int>::max(); // y no deje de comparar
    int i = 0, j = 0;
    for (int k = p; k < r + 1; k++)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
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