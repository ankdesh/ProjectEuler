#include<stdio.h>
main()
{
 int i,j;
 unsigned long long int sum1 = 0, sum2 = 0;
 for( i = 1 ; i <= 100 ; i++)
  sum1+=i;
  sum1*=sum1;
  for(i = 0 ; i <=100; i++)
  sum2+=i*i;
  printf("%d",sum1-sum2);
}
