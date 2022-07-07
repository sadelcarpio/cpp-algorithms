#include <iostream>
#include <vector>
#include "utils.hpp"

using namespace std;

/**
 * @brief Llena un arreglo de n elementos
 * 
 * @param n es el numero de elementos del arreglo
 * @return arreglo con valores ingresados
 */
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
