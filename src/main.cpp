#include<iostream>
#include "../include/Example.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
  int a, b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;

  cout<<"Sum of "<<a<<" and "<<b<<" is: "<<add(a, b);
  return 0;
}
