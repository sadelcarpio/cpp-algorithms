#include <iostream>

void swapnum(int, int); 
void swapnum_ref(int&, int&);
void fill_array(int *arr, int n);

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 20;
    int arr[a];
    fill_array(arr, a); // se modifica el array dentro de la función
    for (int i = 0; i < a; i++)
    {
        std::cout << arr[i] << std::endl;
    }  
    swapnum(a, b);
    std::cout << a << ',' << b << std::endl; // no cambia el valor real
    swapnum_ref(a, b);
    std::cout << a << ',' << b << std::endl; // sí cambia el valor real
    return 0;
}

void swapnum(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
}

void swapnum_ref(int &a, int &b) // Estamos hablando aquí de la ubicación de a y b
{
    int temp = a; // a y b son las variables que estamos pasando como argumento, no una copia
    a = b;
    b = temp;
}

void fill_array(int *arr, int n) // Pasar array por referencia
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}
