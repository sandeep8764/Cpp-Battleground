// Scope Resolution in OOPs 

#include<iostream>
using namespace std;
 
class Reactangle 
{
    private:
    int length ;
    int breadth ;

    public:

    Reactangle(int l=1,int b=1)
{//Parameterized Constructor
    setLength(l);
    setBreadth(b);
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
    int Area ()
    {
        return length*breadth;

    }
    int Perimeter ();


};

int Reactangle::Perimeter()
{

    return 2*(length+breadth);

}


int main ()
{
    Reactangle r(10,6);

cout<< " Area of Reactangle :"<< r.Area()<<endl;
cout<< " Perimeter of Reactangle :"<< r.Perimeter()<< endl;

    return 0;
     
}