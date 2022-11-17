//info por funciones polimorfism funciones 
  
#include <bits/stdc++.h>
using namespace std;
  
class padre
{
public:
    virtual void print()
    { cout<< "print algo" <<endl; }
   
    void show()
    { cout<< "show algo" <<endl; }
};
   
class derived:public padre
{
public:
    void print() //print() is already virtual function
    { cout<< "print derived class" <<endl; }
   
    void show()
    { cout<< "show derived class" <<endl; }
};
  
//main function
int main() 
{
    padre *bp;
    derived d;
    bp = &d;
    //anulación de funciones
    bp->print();   
    // No virtual function
    bp->show(); 
    return 0;
} 