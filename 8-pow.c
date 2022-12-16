#include <stdio.h>
int main(){
	float a;
	int b;
	int i;
	float sum=1;
	
	printf("1. Sayi: ");
	scanf("%f", &a);
	printf("2. Sayi: ");
	scanf("%d", &b);
	
	if(b < 0){
		a = 1 / a;
		b = -b;
	}
	
	/*
	for(i=0; i<b; i++){
		sum=sum*a;
	}
	*/
	
	i=0;
	
	while(i<b){
		sum=sum*a;
		i++;
	}
	
	printf("%f", sum);
	
	getch();
	
	return 0;
	
}
