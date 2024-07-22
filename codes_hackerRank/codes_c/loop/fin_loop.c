////////////////////////////////
////////////////////////////////
////////////////////////////////
/////////atgreenbay/////////////
////////////////////////////////
////////////////////////////////
////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int  n;
    scanf("%d", &n);
    int aux,aux1,aux2,aux3;
    int len=2*n-1;
    aux=n;
    for(int i=1; i<=len; i++){
      for(int j=1; j<=len; j++){
          	aux1=i<=len-i?i-1:len-i;
          	aux2=j<=len-j?j-1:len-j;
          	aux3=aux1<=aux2?aux1:aux2;
          	printf("%d ",aux-aux3);
             }
      
          printf("\n");
    }    
    //printf("\n hi hacker address %d, value: %d \n", &n, n);
    return 0;
    
}
