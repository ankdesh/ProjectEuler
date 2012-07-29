// 10000000000 = 2540BE400

#include<stdio.h>
main ()
{
  long long int a = 1;
  int i;
  for (i = 0; i < 7830457; i++)
    {
      a *= 2;
//   printf("\n%llu  ",a);
      if (a > 10000000000ULL)
	{
	  a -= ((a / 10000000000ULL) * 10000000000ULL);
	}
//   printf("%llu  ",a);
    }
  a *= 28433;
  a++;
  printf ("%llu", a);
}
