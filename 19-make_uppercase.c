#include <stdio.h>
int main(){
	int i=0;
	char a[100];
	
	printf("Text girin: \n");
	//scanf("%s", a);
	gets(a);
	
	while(a[i] != 0){
		if(a[i]=='.' && a[i+1] >= 'a' && a[i+1] <= 'z'){
			a[i+1] = a [i+1] - ('a' - 'A');
		}
		i++;
	}
	
	//printf("%s", a);
	puts(a);
	
	return 0;
	
}
