//info clase derivada tiene una definición para una de las funciones miembro de la clase base
  
#include <bits/stdc++.h>
using namespace std;
  
class base
{
public:
    virtual void print()
    { cout<< "print algo" <<endl; }
   
    void show()
    { cout<< "show algo" <<endl; }
};
   
class derived:public base
{
public:
    void print() //print() is already virtual function in derived class, we could also declared as virtual void print() explicitly
    { cout<< "print derived class" <<endl; }
   
    void show()
    { cout<< "show derived class" <<endl; }
};
  
//main function
int main() 
{
    base *bp;
    derived d;
    bp = &d;
       
    //anulación de funciones
    bp->print(); 
       
    // No virtual function
    bp->show(); 
  
    return 0;
} 