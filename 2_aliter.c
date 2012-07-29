#include<stdio.h>
main()
{
int x =1,y = 1;
int i = 0;
long long int sum = 0;
while (sum < 4000000)
{
 sum += (x + y);
 x = x + 2 * y;
 y = 2 * x + 3 * y;
 printf("%d \n",sum);
 i++;
}
printf("%ld \n",sum);
}
