#include<stdio.h>

int isPrime(unsigned long long int a)
{
 unsigned long long int i;
 for(i=2;i<a/2; i++)
  if(a%i == 0) 
   return 0;
 return 1;
}
main()
{
 unsigned long long int a = 600851475143;
 unsigned long long int i,largest;
 for(i=2;i<=a;i++)
 {
  if(a%i == 0 && isPrime(i))
  {
   largest = i;
   a = a/i;
   i--;
   printf("a = %llu i = %llu\n",a,i);
  }
 }
 printf("Largest prime factor = %llu",largest);
}
