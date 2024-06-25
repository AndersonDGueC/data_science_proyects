#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int n, m;
	scanf("%d", &n);

	int aux=n;
	for(int i=0; i<5; i++){
	int aux2;
	if(aux/10>=1000){
		aux2=(aux/10)/1000;
		aux=aux%10;
		printf("%d %d", aux2, aux);
	}
	else if(aux/10>=100 && aux/10<1000){
		aux2=aux2+(aux/10)/100;
		aux=aux%10;
		printf("%d %d", aux2, aux);
	}
	else if(aux/10>=10 && aux<100){
		aux2=aux2+(aux/10)/100;
		aux=aux%10;
		printf("%d %d", aux2, aux);
	}
	else{
		aux2=aux2+aux/10+ aux%10;
		printf("%d",aux2);
	}
	}
	return 0;
}
