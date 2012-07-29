#define isG_MILL(x) x>1000000?1:0
#include<stdio.h>

unsigned long long int lukUpTable_nCk[101][101]={0};


unsigned long long int nCk( int n, int k)
{
 int i;
 if ( k > n )
 return 0;
 if ( k == 0 ) return 1;
 if ( lukUpTable_nCk[n][k] != 0)
  return lukUpTable_nCk[n][k];
 else
  lukUpTable_nCk[n][k] = nCk(n-1,k-1)+nCk(n-1,k);
//  printf("\n %d  %d  %lld",n,k,lukUpTable_nCk[n][k]);
  return lukUpTable_nCk[n][k];
}
 
main()
{
 unsigned long long int i,j,k;
 int count = 0;
 for(i = 1; i <= 100;i++)
 {
   k = i/2;
  for( j = 0 ; j <= k ;j++ )
  { 
   if( isG_MILL(nCk(i,j)))
   { 
//     printf (" \n %lld %lld",i,j);
     if (i & 0x01 )  // odd
      count += (k-j+1)*2;
     else
      count += (k-j)*2+1;
     break;
   }  
  }
 }
printf("\n%d",count);
}
