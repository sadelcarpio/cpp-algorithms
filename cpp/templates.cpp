#include <iostream>

using namespace std;

template <typename T>
T custom_max(T x, T y)
{
    return (x > y)? x: y;
}

int main(int argc, char const *argv[])
{
    cout << custom_max<int>(3, 6) << endl;
    cout << custom_max<char>('s', 'd') << endl;
    return 0;
}
