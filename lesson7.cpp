#include <iostream>
using namespace std;

class Computer
{
    private:
        string name;
    public:
        string cpu;
        string gpu;
        int ram;
        int price;

    string price_check()
    {
        if (price > 2000)
        {
            return "expensive";
        }
        else
        {
            return "cheap";
        }
    }
};

int main()
{
    Computer hpcomputer,dellcomputer;
    hpcomputer.cpu = "amd";
    hpcomputer.gpu = "nevidia";
    hpcomputer.ram = 8;
    hpcomputer.price = 4000;

    cout << hpcomputer.cpu << endl;
    cout << hpcomputer.price_check();
}