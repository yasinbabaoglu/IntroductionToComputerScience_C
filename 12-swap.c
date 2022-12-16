#include <stdio.h>
int main(){
	int a, b, temp;
	
	printf("a sayisini gir: ");
	scanf("%d", &a);
	printf("b sayisini gir: ");
	scanf("%d", &b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("a= %d ", a);
	printf("b= %d", b);
	
	getch();
	
	return 0;
	
}
