#include <iostream>
#include <vector>
#include "../cpp/functions.cpp"

using namespace std;

int searching_v(vector<int>, int);
vector<int> binary_sum(vector<int>, vector<int>);

int main(int argc, char const *argv[])
{
    int v, n1;
    cin >> v;
    cin >> n1;
    vector<int> arr = fill_arr(n1);
    int solution = searching_v(arr, v);
    cout << "Solucion del primer problema: " << solution << endl;
    /**************************************************************/
    vector<int> a, b;
    int n2;
    cin >> n2;
    a = fill_arr(n2);
    b = fill_arr(n2);
    vector<int> c = binary_sum(a, b);
    cout << "Solucion del segundo problema: " << endl;
    for (int i = 0; i < c.size(); i++)
    {
        cout << '[' << c[i] << ']';
    }
    
    return 0;
}

int searching_v(vector<int> arr, int v) 
{
    int solution = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == v)
        {
            solution = i;
            break;
        }
    }
    return solution;
}

vector<int> binary_sum(vector<int> a, vector<int> b) {
    vector<int> c(a.size() + 1); // inicializa en cero
    int carrier = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        c[i + 1] = ((a[i] != b[i])!=carrier); // suma binaria
        carrier = (a[i] && b[i]) ? 1 : 0;
    }
    c[0] = carrier;
    return c;
}
