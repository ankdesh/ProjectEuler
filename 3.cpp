#include<iostream>
#include<math.h>

using namespace std;

int main()
{
//  for (long long int i = 0; i < 600851475143L ; i ++)
//  {
//    if (600851475143L%i == 0)
//    { cout << i;
//      return 0;
//    }
//  }

  long long int i = 2;
  long long int num = 600851475143L;
  
  while(i < num)
  {
    i++;
    if (num%i == 0)
    {
      cout << " "<< i;  
      num /= i;
    }
  }
}
