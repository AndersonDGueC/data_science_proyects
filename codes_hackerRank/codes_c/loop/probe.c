#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int n;
	int aux;
	scanf("%d", &n);
	aux=n;

	for(int i=n-1; i>-n; i--){
		int row=abs(i)+1;
		for(int j=n-1; j>-n; j--){
		int col=abs(j)+1;
		int cell=(row-col)?row:col;
		printf("%d",cell);
		}
		printf("\n");
	}

}
