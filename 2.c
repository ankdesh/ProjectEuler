#include<stdio.h>
main()
{
 long long int a=0;
 int i=0,iMinus1=1,iMinus2=1;
 
 while ( i < 4000000)
 { 
  i = iMinus1 + iMinus2;
  iMinus2 = iMinus1;
  iMinus1 = i;
  if(i%2 == 0)
  a+=i;
 printf("%ld\n",i);
 }
 printf("%ld\n",a);
}
