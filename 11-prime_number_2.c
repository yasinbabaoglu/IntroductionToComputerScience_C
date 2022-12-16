#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){
	int N, i, j;
	bool flag;
	
	printf("Bir sayi gir: ");
	scanf("%d", &N);
	
	
	for(i=2; i<N; i++){
		flag = true;
		/*
		for(j=2; j<=sqrt(i); j++){
			if(i%j==0){
				flag = false;
			}
		}
		*/
		j=2;
		while(j<=sqrt(i) && flag == true){
			if(i%j==0){
				flag = false;
			}
			j++;
		}
		
		if(flag == true){
			printf("%d,", i);
		}
		
	}
	//printf("finish");
	getch();
	
	return 0;
}
