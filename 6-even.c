#include <stdio.h>
int main(){
	int a;
	
	printf("Bir sayi gir: ");
	scanf("%d", &a);
	
	if(a > 10){
		
		if (a % 2 == 0){
			printf("cift");
		}
		
		else{
			printf("tek");
		}
	}
	
	getch();
	
	return 0;
	
}
