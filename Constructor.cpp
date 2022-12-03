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
     string Model;
     int Year;
     int Speed;
     string Gear;
     cars(string model,int year,int speed,string gear){
         Model = model;
         Year = year;
         Speed = speed;
         Gear = gear;
         
     }
     
     void introduce(){
         cout<<"Model: "<<Model<<endl;
         cout<<"Year: "<<Year<<endl;
         cout<<"Speed: "<<Speed<<endl;
         cout<<"Gear: "<<Gear<<endl;
     }
};
int main()
{
    cars desc("BMW", 2015,200,"Manual");
    
    desc.introduce();
    
    cars desc1("Mercedes-benz", 2018,200,"Auto");
    
    desc1.introduce();
    
    cars desc2("Aqura", 2015,200,"Manual");
    
    desc2.introduce();
    
    cars desc3("Ferari", 2019,350,"Auto");
    
    desc3.introduce();
    return 0;
}