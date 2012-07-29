#include<stdio.h>
int palindrome( long long int a)
{
 int arr[10],i=0,j,result = 1;
 while(a > 0 )
 {
  arr[i] = a%10;
  a/=10;
  i++;
 } 
 for(j = 0;j <= i-1; j++)
 {
  if(arr[j] != arr[i-j-1])
  {
   result = 0;
   break;
  }
 }
 return result;
}
main()
{
 unsigned long long int a,i=999L,j=999L,k=0,palin[10000]={0}; 
 int p = 0;
   for ( i = 999L; i >1; i--)
    for (j = 999L; j > 1; j-- )
   {
    a= i * j;
    if (palindrome(a))
     {
    printf("%lld  %lld  %lld \n",i,j,a);
	palin[p] = a;
        p++;
     }
    k++;
   }
   p = 0; 
   a = palin[p];
   while(palin[p]!=0)
    {
         printf("%lld  ",a);
     if ( a< palin[p])
      a = palin[p];
      p++;
    }
} 
