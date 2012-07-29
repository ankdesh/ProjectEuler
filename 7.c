#include<stdio.h>
main()
{
 unsigned long long int prime[10002]={2};
 unsigned long long int k = 3L;
 int index = 0,flag, j;
  while (index < 10000) 
  { 
     flag = 1;
     for ( j = 0; j <= index; j++)
      {
        if( k % prime[j] == 0)
         {
           flag = 0;
           break;
         }
      }
        if(flag)
         {
           index++;
           prime[index] = k;
         }
     k++;
   }
  printf("%lld  %lld \n",prime[3],prime[10000]);
}
