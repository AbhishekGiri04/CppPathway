#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: "; 
    cin >> age;
    (age >= 18) ? cout << "You are eligible to vote." << endl : cout << "You are not eligible to vote." << endl;
    return 0;
}