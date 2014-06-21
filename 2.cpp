#include<iostream>

using namespace std;

int sumFibbonacci()
{
  int sum = 2, fibb = 2, fibbLast = 1;
  while(fibb <= 4000000)
  { 
    int temp = fibb;
    fibb = fibb + fibbLast; 
    fibbLast = temp;
    if ( fibb % 2 )
      sum += fibb;
  }
  cout << sum - fibb; // remove the last added fib which makes sum >4M

}

int main()
{

  sumFibbonacci();

}
