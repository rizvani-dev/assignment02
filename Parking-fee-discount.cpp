#include <iostream>
using namespace std;

int main()
{
    int hours, studentID;

    cout << "Enter parking hours: ";
    cin >> hours;

    cout << "Do you have a valid student ID? (1 = Yes, 0 = No): ";
    cin >> studentID;

    if (studentID == 1 && hours >= 2)
    {
        cout << "Student Parking Discount Applicable";
    }

    return 0;
}