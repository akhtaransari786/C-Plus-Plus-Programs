#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << " Enter Your Marks : ";
    cin >> marks;
    if (marks >= 90)
    {
        cout << " Grade 'A' " << endl;
    }
    else if (marks >= 70)
    {
        cout << " Grade 'B' " << endl;
    }
    else if (marks >= 40)
    {
        cout << " Grade 'C' (Poor) " << endl;
    }
    else
    {
        cout << " Fail " << endl;
    }
    return 0;
}