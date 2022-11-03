#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H
#include "Stack.h"
#include "assert.h"
#define RESIZEFACTOR 10
template<typename T>

class StackArray: public Stack<T> {
  private:
    int size; 
    T* data;
    T* sp;
    void resize();
  public:
    StackArray(int s): size{s},data{new T[size]}, sp{data}{};
    ~StackArray (){delete[] data;};
    void push(T);
    void pop();
    T top();
    bool empty();
    bool allEquals();
};
#endif