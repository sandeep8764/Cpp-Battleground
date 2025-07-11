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

 Reactangle(); // Non Parameterized Constructor
 Reactangle(int l=1,int b=1); // Parameterized Constructor
 Reactangle(Reactangle &r1); // Copy Constructor 





void setLength(int l);
void setBreadth(int b);


 int getLength();
 int getBreadth();

 
float Area();
float Perimeter();

bool isSquare ();

~ Reactangle(); // Destructor 



};



int main ()
{
    Reactangle r(25,4);
    cout<< " Area of Reactangle :"<< r.Area()<< endl;
    cout<< " Perimeter  of Reactangle :"<< r.Perimeter()<< endl;
    cout<< " Type  of Reactangle :"<< r.isSquare()<< endl;

     

    
    return 0;
     
}
 Reactangle::Reactangle()
 { // Non Parameterized Constructor
     length=1;
    breadth=1;

 }
 Reactangle::Reactangle(int l=1,int b=1)
{//Parameterized Constructor
    setLength(l);
    setBreadth(b);
}

Reactangle::Reactangle(Reactangle &r1)
{ // Copy type Constructor
    length=r1.length;
    breadth=r1.breadth;


}



void Reactangle::setLength(int l)
{
    if(l>=0)
    {
        length=l;

    }
    else length=0;

}

void Reactangle::setBreadth(int b)
{
    if(b>=0)
    {
        breadth=b;


    }
    else breadth=0;
    
}
 int Reactangle:: getLength()
 {
    return length;

 }

 int Reactangle::getBreadth()
 {
    return breadth;

 }
float Reactangle:: Area() 
{
    return length*breadth;
}

float Reactangle:: Perimeter()
{
    return 2*(length+breadth);

}
bool Reactangle::isSquare()
{
    if(length==breadth)
    {
        return length==breadth;

         
    }
}

Reactangle::~Reactangle()
{
    cout<< " Reactangle Destroyed :"<< endl;

}



