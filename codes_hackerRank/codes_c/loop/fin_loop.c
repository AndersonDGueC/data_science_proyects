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
    int aux;
    scanf("%d", &n);
    aux=n;
    for(int i=0; i<(n+(n-1)); i++){
      for(int j=0; j<(n+(n-1)); j++){
          if(j>=i && j<(n+(n-1))-i){
          printf("%d",aux);
          }
          else{
          printf("%d", n);
          }
      }
          printf("\n");
          aux=aux-1;
     
    
    }
    
    //printf("\n hi hacker address %d, value: %d \n", &n, n);
    return 0;
    
}
