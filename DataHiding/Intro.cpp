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
    Reactangle r;
    r.setLength(10);
    r.setBreadth(-5);

    cout<< " Length of Reactangle:"<< r.getLength()<<endl;
    cout<< " Breadth of Reactangle:"<< r.getBreadth()<<endl;
    
    cout<< " Area of Reactangle :"<< r.Area()<< endl;
    cout<< " Perimeter of Reactangle :"<< r.Perimeter()<< endl;







    return 0;
     
}