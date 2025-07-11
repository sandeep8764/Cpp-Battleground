// Inline Function in OOps Class

#include<iostream>
using namespace std ;

class Test 
{
public:
void Fun1()
{
    cout<< " Its Inline Function :"<< endl;

}
void Fun2();

};

void Test::Fun2()
{
    cout<< " Its Non Inline Function :"<< endl;

}


int main ()
{
    Test t;
    t.Fun1();
    t.Fun2();
    
    return 0;

}