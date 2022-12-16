#include <stdio.h>
#include <stdbool.h>
int main(){
	int A;
	int i;
	//bool flag;
	int flag;
	
	printf("Bir sayi girin: ");
	scanf("%d", &A);
	
	flag = 1;
	for(i=2; i<A; i=i+1){
		if(A%i==0){
			flag = 0;
		}
	}
	if(flag == 1){
		printf("Asal");
	}
	else{
		printf("Asal degil");
	}
	
	getch();
	
	return 0;
}
	
		
	
