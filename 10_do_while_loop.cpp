#include<iostream>
using namespace std;

int main(){
    int i=1;
    // At least one iteration will be executed even if the condition is false
    do{
        cout<<i<<endl;
        i++;
    }while(i<=5);
    return 0;
}