#include <iostream>
using namespace std;

int contact_number(string name);
bool error = false;
string list_names[] = {"ahmad","ali","khaled","mohammad","samer","alaa"};
int list_numbers[] = {922345,912345,987125,965289,123456,782356};

int main()
{
    string name;
    cout << "enter the contact name" << endl;
    cin >> name;
    int item_number  = contact_number(name);
    if (error == true)
    {
        cout << "wrong name";
    }
    else
    {
        cout << list_numbers[item_number];
    }
}

int contact_number(string name)
{
    bool isthere = false;
    for (int i = 0; i < 7; i++)
    {
        if (name == list_names[i])
        {
            return i;
            isthere = true;
        }
    }
    if (isthere == false)
    {
        error = true;
    }
}