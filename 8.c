#include<stdio.h> 
#include<assert.h>
main()
{
 FILE* fPtr;
 int num[1000];
 char temp2;
 int numOfTimesMultiplied = 0;
 int i,j,max=1,temp;
 fPtr = fopen("in_8","r");
 assert(fPtr != NULL);
 for(i = 0; i < 1000; i++)
 {
   fscanf(fPtr,"%c",&temp2);
   num[i] = temp2 - '0';
 }
 for(j = 0; j <5; j++)
 max *= (int)num[j];
 for(i = 0; i < 995; i++)
 {
   if(num[i+5] == 0 || num[i+5] == 1 || num[i+5] < num [i])
   continue;
   numOfTimesMultiplied++;
   temp = 1;
   for(j = 1; j <= 5 ; j++)
   temp *= num[i+j];
   if ( max < temp)
   max = temp;
 }
  printf("%d\n", max);
  printf("Number of Multiplications%d\n",numOfTimesMultiplied);

}
