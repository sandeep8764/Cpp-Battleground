// Introduction of OOPs in C++
#include<iostream>

using namespace std;

class Reactangle 
{
    public:  // Make public for Access
int length ;
int breadth ;

float Area() 
{
    return length*breadth;
}

float Perimeter()
{
    return 2*(length+breadth);

}



};



int main ()
{

    Reactangle r1,r2; // object of class Reactangle (Data types )

    r1.length=10; 
    r1.breadth=5;

    cout<< " Area of First Reactangle :" << r1.Area()<< endl;
    cout<< " Perimeter  of First Reactangle :" << r1.Perimeter()<< endl;


    r2.length=100;
    r2.breadth=2;
    cout<< " Area of R2 Reactangle :" << r2.Area()<< endl;
    cout<< " Perimeter of R2 Reactangle :" << r2.Perimeter()<< endl;







    return 0;
     
}