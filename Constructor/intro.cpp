// Constructor in OOPs 

// Data Hiding In OOPs 

// Introduction of OOPs in C++
#include<iostream>

using namespace std;

class Reactangle 
{
    private: // Not Accessible 
int length ;
int breadth ;
public:

// Reactangle()
// { // Non Parameterized Constructor
//     length=1;
//     breadth=1;

// }

Reactangle(int l=1,int b=1)
{//Parameterized Constructor
    setLength(l);
    setBreadth(b);
}

Reactangle(Reactangle &r1)
{ // Copy type Constructor
    length=r1.length;
    breadth=r1.breadth;


}



void setLength(int l)
{
    if(l>=0)
    {
        length=l;

    }
    else length=0;

}

void setBreadth(int b)
{
    if(b>=0)
    {
        breadth=b;


    }
    else breadth=0;
    
}
 int getLength()
 {
    return length;

 }

 int getBreadth()
 {
    return breadth;

 }
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
    Reactangle r1(10,4);
    Reactangle r2(r1);
    
    cout<< r1.Area()<<endl;
    cout<< r2.Area()<<endl;


    
    return 0;
     
}