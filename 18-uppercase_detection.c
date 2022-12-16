#include <stdio.h>

int main(){
	int i=0, count = 0;
	char a[100];
	
	printf("text gir:\n");
	scanf("%s", &a);
	
	while(a[i] != '\0'){
		if (a[i] >= 'A' && a[i] <= 'Z'){
			count++;
		}
		i++;
	}
	printf("%d", count);
	
	getch();
	return 0;
	
}
