#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int n, m;
	printf("Ingrese un numero entre 10000 y 99999 \n");
	scanf("%d", &n);

	int aux=n;
	for(int i=0; i<5; i++){
	int aux2;
	if(aux>=10000 && aux<100000){
		aux2=aux/10000;
		aux=aux%10000;
		printf("%d-%d \n", aux2, aux);
	}
	else if(aux>=1000 && aux<10000){
		aux2=aux2+aux/1000;
		aux=aux%1000;
		printf("%d-%d \n", aux2, aux);
	}
	else if(aux>=100 && aux<1000){
		aux2=aux2+aux/100;
		aux=aux%100;
		printf("%d-%d \n", aux2, aux);
	}
	else if(aux>=10 && aux<100){
		aux2=aux2+aux/10;
		aux=aux%10;
		printf("%d-%d \n", aux2, aux);
	}
	else if(aux<10){
		aux2=aux2+aux;
		aux=aux/10;
		printf("%d-%d \n", aux2, aux);
	}
	else{
		aux2=aux2+aux;
		printf("%d",aux2);
	}
	m=aux2;
	}
	printf("The result is:%d \n", m);
	return 0;
}
