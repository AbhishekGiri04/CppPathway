#include<iostream>
using namespace std;

int main(){
    //Arithmetic Operators
    int a=10;
    int b=5;
    cout<<"Addition: "<<a+b<<endl;
    cout<<"Subtraction: "<<a-b<<endl;
    cout<<"Multiplication: "<<a*b<<endl;
    cout<<"Division: "<<a/b<<endl;
    cout<<"Modulo: "<<a%b<<endl;

    //Relational Operators
    cout<<"Equal to: "<<(a==b)<<endl;
    cout<<"Not equal to: "<<(a!=b)<<endl;
    cout<<"Greater than: "<<(a>b)<<endl;
    cout<<"Less than: "<<(a<b)<<endl;
    cout<<"Greater than or equal to: "<<(a>=b)<<endl;
    cout<<"Less than or equal to: "<<(a<=b)<<endl;

    //Logical Operators
    bool x=true;
    bool y=false;
    cout<<"Logical AND: "<<(x&&y)<<endl;
    cout<<"Logical OR: "<<(x||y)<<endl;
    cout<<"Logical NOT: "<<(!x)<<endl;

    //Assignment Operators
    int c=0;
    c+=a; // c = c + a
    cout<<"c after c+=a: "<<c<<endl;
    c-=b; // c = c - b
    cout<<"c after c-=b: "<<c<<endl;
    c*=a; // c = c * a
    cout<<"c after c*=a: "<<c<<endl;
    c/=b; // c = c / b
    cout<<"c after c/=b: "<<c<<endl;
    c%=a; // c = c % a
    cout<<"c after c%=a: "<<c<<endl;
    cout<<"Value of c: "<<c<<endl;

    //Bitwise Operators
    int d=5; // 0101 in binary
    int e=3; // 0011 in binary
    cout<<"Bitwise AND: "<<(d&e)<<endl; // 0001 
    cout<<"Bitwise OR: "<<(d|e)<<endl; // 0111
    cout<<"Bitwise XOR: "<<(d^e)<<endl; // 0110
    cout<<"Bitwise NOT: "<<(~d)<<endl; // 1010 -(n+1)
    cout<<"Left shift: "<<(d<<1)<<endl; // 1010 (n*2)
    cout<<"Right shift: "<<(d>>1)<<endl; // 0010 (n/2)
    
    return 0;
}