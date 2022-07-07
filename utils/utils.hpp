#include <iostream>
#include <vector>

using namespace std;

vector<int> fill_arr(int);
/**
 * @brief Imprime un arreglo
 *
 * @param arr es el arreglo a imprimir
 */
template <typename T>
void print_arr(vector<T> &arr)
{
    for (T elem : arr)
    {
        cout << '[' << elem << ']';
    }
    cout << "" << endl;
}