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
//   Reactangle r1;
//   Reactangle *ptr;
//   ptr=&r1;  // Pointer ptr Conatin the address of Object r1

//   ptr->length=25;  // Way of Access Object By pointer (ptr)
//   ptr->breadth=4;
//   cout<< " Area of Reactangle r1:"<< ptr->Area()<< endl;
//   cout<< " Perimeter of Reactangle r1:"<< ptr->Perimeter()<< endl;


// Creating Object in Heap Memory 

Reactangle *ptr;
ptr=new Reactangle();
  // ClassName* pointerName = new ClassName();
// Reactangle* ptr=new Reactangle();
ptr->length=25;
   ptr->breadth=4;
   cout<< " Area of Reactangle r1:"<< ptr->Area()<< endl;
   cout<< " Perimeter of Reactangle r1:"<< ptr->Perimeter()<< endl;




    return 0;
     
}