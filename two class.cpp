/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
class math_oper{
    private:
    int num1,num2;
    public:
    int result(int num1,int num2){
        return num1*num2;
    }
};


int main()
{
    int num1,num2;
    math_oper r1;
    cout<<"Enter first number: ";
    cin >> num1;
    cout<<"Enter second number: ";
    cin >> num2;
    cout<<"The result is: "<<r1.result(num1,num2)<<endl;
    
    return 0;
}