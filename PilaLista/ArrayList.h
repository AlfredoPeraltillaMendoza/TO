#ifndef LIST_H
#define LIST_H

template <typename T>
class List {
  public:
    virtual void push(T) = 0;
    virtual T top() = 0;
    virtual bool empty() = 0;
    virtual T remove() = 0;
  
};
#endif