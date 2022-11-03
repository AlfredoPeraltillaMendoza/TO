#ifndef STACK_LIST_H
#define STACK_LIST_H
#include "List.h"

template <typename T> struct List  
{
  T data;
  List<T>* next;
};
template <typename T>
class StackList : public List<T>
{
private:
  int size;
  List<T> *np;
public:
    StackList();
  ~StackList();
    void push(T);
    T  top();
    bool empty();
};

#endif