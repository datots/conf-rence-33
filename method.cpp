/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class cars{
    public:
        string model;
        int rel_yer;
        int speed;
        
    void introduce(){
        cout<<"Name: "<<model<<endl;
        cout<<"Car release Year: "<<rel_yer<<endl;
        cout<<"Speed of the car: "<<speed<<endl;
    }
    
};

int main()
{
    cars desc;
    
    desc.model = "Mercedes-benz";
    desc.rel_yer = 2013;
    desc.speed = 160;
    
    desc.introduce();
    
    cars desc2;
    
    desc2.model = "BMW";
    desc2.rel_yer = 2020;
    desc2.speed = 300;
    
    desc2.introduce();
    return 0;
}