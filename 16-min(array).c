#include <stdio.h>
int main(){
	int N, i, min, a[100];
	
	printf("Dizi sayisini girin: ");
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		printf("%d. degeri girin: ", i);
		scanf("%d", &a[i]);
	}
	min= a[0];
	for(i=1; i<N; i++){
		if(min > a[i]){
			min= a[i];
		}
	}
	printf("Minimum deger= %d", min);
	
	getch();
	
	return 0;
}
