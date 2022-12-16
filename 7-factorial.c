#include <stdio.h>
int main(){
	unsigned long long int i;
	unsigned long long int N;
	unsigned long long int sum;
	printf("Bir sayi girin: ");
	scanf("%d", &N);
	
	
	sum = 1;
	for(i=1; i<=N && sum!=0; i=i+1){
		sum = sum * i;
	}	
	printf("Sonuc: %llu", sum);
	
	getch();
	
	return 0;

}
