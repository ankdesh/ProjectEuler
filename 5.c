#include<stdio.h>

main()
{
 int i,j,k;
 int primes[] = { 2,3,5,7,11,13,17,19};
 int arr[20],prod=1,flag2=1;
 
 for( i = 0; i< 20; i++)
  arr[i]=i+1;
  for( i = 0; i < 8; i++)
  {
   flag2 =1;
   while(flag2)
   {
    flag2 = 0;
     for( j =0; j <20; j++)
      {
        if(arr[j] != 1)
        {
             for(k = 0; k < 20; k++)
             printf (" %d ",arr[k]);
             printf("**%d** \n",j);
         if( arr[j] % primes[i] == 0)
           {
             flag2 =1;
             arr[j] = arr[j] / primes[i];
        }
      } 
    }
    if(flag2 == 1)prod*=primes[i];
  }
 }
 printf("%d\n",prod);
             for(k = 0; k < 20; k++)
             printf (" %d ",arr[k]);
             printf("**%d** \n",j);
} 
