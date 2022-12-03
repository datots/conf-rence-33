/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class A{
    public:
    int sum = 0;
    A();
    A(int num1,int num2){
        sum = num1+num2;
    }
    void print(){
        cout<<"Sum = "<<sum<<endl;
    }
};
int main()
{   
    
    A obj1(5,15);
    obj1.print();
    return 0;
;
}