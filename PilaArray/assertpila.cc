#include "StackArray.cc"

// argument count and argument vector
//int main(int argc, char *argv[])
//int num_args, char** arg_strings
int main()
{
StackArray<int>x(2);
  
    x.push(1);
    x.push(2);
    x.push(3);

    x.pop();
    x.top();
    x.empty();
  return 0;
}