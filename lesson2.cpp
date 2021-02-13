#include <iostream>
using namespace std;

void name(string name);
int sample();

int main()
{
    string name2 = "ameen";
    name(name2);
    sample();

}

void name(string name)
{
    cout << name << endl;
    sample();
}

int sample()
{
    int number = 22;
    cout << number << endl;

    return number;
}