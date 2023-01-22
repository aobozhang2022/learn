#include <iostream>

int addition (int& a, int& b)
{
  int r = a + b;
  a++;
  return r;
}

int main() {
    int a = 1;
    std::cout<<(a++)*(++a)<<std::endl;
    return 0;
}
