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
	if(n>=k && n>=2){
	printf("good ;) \n");
	for(int i=1; i<=n; i++){
		for(int j=1+i; j<=n; j++){
		if(i!=(j+1) && i<(j+1)){
		printf("%d %d  \n", i, j);
				}
			}
		}
	}
	else{
	printf("WRONG, n has greather or equal than k and n greather than 2");
	}
}

int main(){
	int n, k;

	scanf("%d &d", &n, &k);
	calculate_the_maximum(n, k);
}
