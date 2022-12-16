// SELECTION SORT 
#include <stdio.h>
int main(){
	int N, i, j, temp, a[100];
	
	printf("Dizi sayisini girin: ");
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		printf("%d. degeri girin: ", i);
		scanf("%d", &a[i]);
	}
	for(i=0; i<N-1; i++){
		for(j=i+1; j<N; j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i=0; i<N; i++){
		printf("%d ", a[i]);	
	}
	
	getch();
	
	return 0;
	
}
