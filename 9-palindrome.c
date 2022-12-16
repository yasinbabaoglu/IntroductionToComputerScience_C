#include <stdio.h>
int main(){
	int A;
	int birler;
	int yuzler;
	
	printf("3 basamakli bir sayi gir: ");
	scanf("%d", &A);
	
	birler = A % 10;
	yuzler = A / 100;
	
	if(yuzler==birler){
		printf("Palendrom");
	}
	else{
		printf("Palendrom degil");
	}
	
	getch();
	
	return 0;	
}
