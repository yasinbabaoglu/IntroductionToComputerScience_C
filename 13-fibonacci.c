#include <stdio.h>
int main(){
	unsigned long long int f1, f2, N, i, temp;
	
	printf("Bir sayi girin: ");
	scanf("%llu", &N);
	
	f1=1;
	f2=1;
	printf("%d %d ", f1, f2);
	//printf("%d ", f2);
	
	for(i=2; i<=N; i++){
		temp= f1;
		f1= f2;
		f2= f1+temp;
		printf("%llu ", f2);
	}
	
	getch();
	
	return 0;
}
