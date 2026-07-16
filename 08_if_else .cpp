#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << " Enter Your Age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << " Eligible For Drive " << endl;
    }
    else
    {
        cout << " Not Eligible For Drive " << endl;
    }
    return 0;
}
