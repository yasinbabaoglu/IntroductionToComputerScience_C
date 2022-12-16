#include <stdio.h>
int main(){
	int sayi;
	
	printf("bir sayi gir: ");
	scanf("%d", &sayi);
	
	if(sayi < 10){
		printf("kucuk");
	}
	else{
		printf("buyuk");
	}
	
	getch();
	
	return 0;
}
