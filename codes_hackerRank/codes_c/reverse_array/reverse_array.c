//////////////////////////
/////////////////////////
//////atgreenbay/////////
/////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, *arr, i;
	scanf("%d", &num);
	arr=(int*) malloc(num * sizeof(int));
	for(i=0; i<num; i++){
		scanf("%d", arr+i);
	}
x
	for(i=num-1;i>=0;i--){
	printf("%d ", arr[i]);
	}
	
	/*for (i=0; i<num; i++){
	printf("%d ", *(arr+i));
	}
	*/
	free(arr);
	return 0;
}
