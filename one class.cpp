/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class rectangle{
    private:
    float l,b;
    public:
    float getarea(float l,float b){
        return l*b;
    }
};
int main()
{
    float l,b;
    rectangle r1;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;
     cout <<"Area of the rectangle is: "<< r1.getarea(l,b)<<" square units.";
}