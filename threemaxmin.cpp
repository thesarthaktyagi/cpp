#include <iostream>
using namespace std;

int main()
{

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << num1 << " is maximum";
        }
        else
        {
            cout << num3 << " is maximum";
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << num2 << " is maximum";
        }
        else
        {
            cout << num3 << " is maximum";
        }
    }
    return 0;
}