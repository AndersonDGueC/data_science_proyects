//////////////////////////////////
//////////////////////////////////
//////////////////////////////////
/////////atgreenbay///////////////
//////////////////////////////////
//////////////////////////////////
//////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k){
	int aux1=0;
	int aux2=0; 
	int aux3=0;
	if(n>=k && n>=2){
	printf("good ;) \n");
	for(int i=1; i<=n; i++){	
		for(int j=1+i; j<=n; j++){
		if(i!=(j+1) && i<(j+1)){
		    //printf("%d %d %d %d %d \n", i, j, i&j, i|j, i^j);
		   	
           if((i&j)>=aux1 && (i&j)<k){
              aux1=i&j;
              printf("%d %d \n", i&j, k);
            }
           if((i|j)>=aux2 && (i|j)<k){
              aux2=i|j;
              printf("%d %d \n", i|j, k);
           }
           if((i^j)>=aux3 && (i^j)<k){
		      aux3=i^j;
              printf("%d %d \n", i^j, k);
           }
			}
		}
    }
    }
    else{
	printf("WRONG, n has greather or equal than k and n greather than 2");
	}
	printf("%d\n%d\n%d\n", aux1, aux2, aux3);
}

int main(){
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);
}
