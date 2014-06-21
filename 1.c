#include<stdio.h>
main()
{
 int i=0;
 long long int n=0;
 for(i=1;i<1000;i++)
 {
  if(i%3==0 || i%5==0 )
  n+=i;
 }
 printf("Sum = %d\n",n);
}
