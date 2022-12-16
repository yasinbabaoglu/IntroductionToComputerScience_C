#include <stdio.h>
int main (){
	
	unsigned long long int sum, i, N;
	printf("sayi: ");
	scanf("%d", &N);
	
	sum = 0;
	for(i=0; i<=N; i++){
		sum +=i;
	}
	printf("sonuc: %llu" , sum);
	
	getch();
	
	return 0;	
	
}
