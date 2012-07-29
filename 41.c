#include<stdio.h>
#include<string.h>
#define SWAP(x,y) {int temp; temp = x; x = y; y = temp;}
unsigned long long int nextPermute(unsigned long long int a)
{
  int i=0,j,len,temp;
  char numArr[50];
  sprintf(numArr,"%llu",a);
  len = strlen(numArr);
  printf("%s ",numArr);
  for(i = 0; i < len; i++)
   numArr[i] ='9'-numArr[i];
  printf("%s\n ",numArr);
//  lex_permute(numArr,len);
  for(i = 0; i < len; i++)
   numArr[i] ='9'-numArr[i];
//  printf("%s \n",numArr);

/*
  for( i = len - 1; i>0; i--)
   if(numArr[i-1] > numArr[i])
   {
    break;
   }
   for( j = len-1; j > i ; j--)
    {
     if(numArr[j] < numArr[i]) 
  SWAP(numArr[i],numArr[i-1])
  for(j = i+1; j<=((len-1)-(i+1)+1)/2+(i); j++)
   SWAP(numArr[j],numArr[(len-1)+(i+1)-j])  
   printf("\nBefore sort %s ",numArr);
   bbsort(numArr,0,len-1); 
   printf("\nAfter sort %s",numArr);
*/    
   a = 0LLU;
   for(j = 0; j < len ; j++)
   {
     a *= 10;
     a += numArr[j]-'0';
   }
//sscanf(numArr,"%llu",&a);
//  printf("%llu %s \n",a,numArr);
  return a;
} 

int lex_permute(int *array, int size) 
{
 int l, r, tmp;
  if (size < 2)
    return 0;
  l = size - 2;
  while (l >= 0 && array[l] > array[l+1])
    --l;

  if (l < 0)
    return 0;
  r = size - 1;
  while (array[r] < array[l])
    --r;
  tmp = array[l];
  array[l] = array[r];
  array[r] = tmp;
  r = size - 1;
  ++l;
  while (l < r) {
    tmp = array[l];
    array[l++] = array[r];
    array[r--] = tmp;
  }
  return 1;
}

main()
{
  int i;
  unsigned long long int a = 9876543210ULL;
  for( i = 0; i < 10; i++)  
  a = nextPermute(a);
//nextPermute(9876501234ULL);
}  
