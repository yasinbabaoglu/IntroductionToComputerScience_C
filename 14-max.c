#include <stdio.h>
int main(){
	int N, max, i, a;
	
	printf("Bir sayi girin: ");
	scanf("%d", &N);
	
	max= 0;
	for(i=1; i<=N; i++){
		scanf("%d", &a);
		if(max < a){
			max = a;
		}
	}
	printf("Maksimum sayi= %d",max);
	
	getch();
	
	return 0;
}
