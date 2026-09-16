#include <iostream>
using namespace std;

int main(){
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;
    switch (grade)
    {
    case 10:
        cout << "A+";
        break; // Break statement to exit the switch case
    case 9:
        cout << "A";
        break;
    case 8:
        cout << "B";
        break;
    case 7:
        cout << "C";
        break;
    default:
        cout << "D";
    }
    return 0;
}