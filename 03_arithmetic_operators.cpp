#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << " Enter Two Numbers : " << endl;
    cin >> a >> b;
    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;
    cout << " Adding = " << a + b << endl;
    cout << " Substracting = " << a - b << endl;
    cout << " Multiplication = " << a * b << endl;
    cout << " Division = " << a / b << endl;
    cout << " Modolus = " << a % b << endl;
    return 0;
}
