#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	
	//a/b çift ve 10'dan büyükse
	
	printf("1. sayiyi gir: ");
	scanf("%d", &a);
	printf("2. sayiyi gir: ");
	scanf("%d", &b);
	
	c = a / b;
	
	if(c % 2 == 0 && c > 10){
		c=c-5;
		printf("Cevap: %d", c);
	}
	
	else{
		printf("sartlar saglanmiyor");
	}
	
	getch();
	
	return 0;
}
