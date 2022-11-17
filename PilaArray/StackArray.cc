#include "StackArray.h"
//#include "assert.h" //lib assertions
//init non definet
template <typename T>
StackArray<T>::StackArray(int n)
{
  size = n;
  data = new T[size];
  sp = data;
  //assert(size > 0 );
}

template <typename T>
void StackArray<T>::push(T e)
{
  int numElem = sp - data;
  if (numElem == size)
    resize();
  *sp = e;
  sp++;
  assert(*(data+numElem) == e );
  assert(size > 0 && data != nullptr); 
}

template <typename T>
void StackArray<T>::pop(){
  int numElem = sp - data; 
  assert(numElem > 0);
  assert(size > 0 && data != nullptr);
  sp--; 
  }

template <typename T>
T StackArray<T>::top()
{
  int numElem = sp - data;
  assert(numElem > 0);
  assert(data != nullptr);
  return *(sp - 1);
  //assert(*(sp-1)==size)) 
}

template <typename T>
bool StackArray<T>::empty()
{
  assert(size > 0 && data != nullptr);
  return sp == data;
  //assert(sp==data);
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
  assert(size == newsize);
  assert(size > 0 && data != nullptr);
}
