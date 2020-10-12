#include <iostream>
using namespace std;

int main()
{

    int sidea, sideb, sidec;
    cin >> sidea >> sideb >> sidec;

    if (sidea == sideb && sideb == sidec)
    {
        cout << "Equilateral Triangle" << endl;
    }
    else if (sidea == sideb || sidea == sidec || sideb == sidec)
    {
        cout << "Isosceles Triangle";
    }
    else
    {
        cout << "Scalene Triangle";
    }

    return 0;
}