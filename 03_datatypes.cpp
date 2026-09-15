#include<iostream>
using namespace std;

int main(){
    // INTEGER DATA TYPE
    int myNum = 5;               // Integer (whole number)
    cout << "Integer: " << myNum << endl;

    // FLOATING POINT DATA TYPE
    float myFloatNum = 5.99;     // Floating point number
    cout << "Float: " << myFloatNum << endl;   
    
    // DOUBLE DATA TYPE
    double myDoubleNum = 9.98;   // Double precision floating point number
    cout << "Double: " << myDoubleNum << endl;  

    // CHARACTER DATA TYPE
    char myLetter = 'D';          // Character
    cout << "Character: " << myLetter << endl;

    // STRING DATA TYPE
    string myString = "Hello";    // String
    cout << "String: " << myString << endl; 

    // BOOLEAN DATA TYPE
    bool myBoolean = true;        // Boolean
    cout << "Boolean: " << myBoolean << endl;   

    // SIZE OF OPERATOR 
    cout << "Size of int: " << sizeof(myNum) << " bytes" << endl;
    cout << "Size of float: " << sizeof(myFloatNum) << " bytes" << endl;
    cout << "Size of double: " << sizeof(myDoubleNum) << " bytes" << endl;
    cout << "Size of char: " << sizeof(myLetter) << " bytes" << endl;
    cout << "Size of string: " << sizeof(myString) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(myBoolean) << " bytes" << endl;

    //Output :
    // Integer: 5
    // Float: 5.99
    // Double: 9.98
    // Character: D
    // String: Hello
    // Boolean: 1
    // Size of int: 4 bytes
    // Size of float: 4 bytes
    // Size of double: 8 bytes
    // Size of char: 1 bytes
    // Size of string: 24 bytes
    // Size of bool: 1 bytes

    return 0;
}