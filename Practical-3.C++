//swap two numbers//
#include <iostream>
using namespace std;

int main()
{
    int x = 5, y = 10, temp;

    cout << "Before swapping.";
    cout << "x = " << x << ", y = " << y;

    temp = x;
    x = y;
    y = temp;

    cout << "\nAfter swapping.";
    cout << "x = " << x << ", y = " << y;

    return 0;
}
