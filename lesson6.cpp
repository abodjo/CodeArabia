#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "inter a number" << endl;
    cin >> number;
    if (number > 100)
    {
        cout << "number is higher than 100";
    }
    else if (number > 50)
    {
        cout << "number is between 50 and 100";
    }
    else
    {
        cout << "number is lower than 50";
    }
}