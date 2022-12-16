#include <stdio.h>
int main(){
	int N, min, i, a;
	
	printf("Bir sayi girin: ");
	scanf("%d", &N);
	
	scanf("%d", &min);
	
	for(i=1; i<N; i++){
		scanf("%d", &a);
		if(min > a){
			min = a;
		}
	}
	printf("Minimum sayi= %d",min);
	
	getch();
	
	return 0;
}
