#include "StackArray.h"
#include <iostream>
template <typename T>
void StackArray<T>::push(T e)
{
  int numElem = sp - data;
  if (numElem == size)
    resize();
  *sp = e;
  sp++;
  
}

template <typename T>
void StackArray<T>::pop()
{ }

template <typename T>
T StackArray<T>::top()
{
  return *(sp - 1);
}

template <typename T>
bool StackArray<T>::empty()
{
  return sp == data;
}

template <typename T>
void StackArray<T>::resize()
{
  int newsize = size + RESIZEFACTOR;
  T *newdata = new T[newsize];
  int numElem = sp - data;
  sp = newdata + numElem;
  for (int i = 0; i < size; i++)
  {
    newdata[i] = data[i];
  }
  T *olddata = data;

  data = newdata;
  sp = newdata + size;
  size += RESIZEFACTOR;

  delete[] olddata;
}