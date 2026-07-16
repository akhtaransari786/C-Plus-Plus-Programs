#include <iostream>
using namespace std;

int main()
{
    int weight;

    cout << "Enter your body weight (kg): ";
    cin >> weight;

    if (weight <= 120)
    {
        if (weight >= 70)
        {
            cout << "You should consider going to the gym to maintain a healthy and active lifestyle." << endl;
        }
        else if (weight >= 30)
        {
            cout << "Congratulations! Your weight is within a healthy range. Keep maintaining your fitness." << endl;
        }
        else
        {
            cout << "Your weight is below the healthy range. Please eat a balanced diet and consult a healthcare professional if needed." << endl;
        }
    }
    else
    {
        cout << "Your weight is above the healthy range. Regular exercise and a balanced diet can help improve your health." << endl;
    }

    return 0;
}
