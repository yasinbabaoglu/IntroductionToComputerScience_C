#include <stdio.h>

int main (){
	int i, j, N, x;
	float sum, fakt;
	float sonuc, temp, genelt;
			
	printf("x degerini girin: ");
	scanf("%d", &x);
	printf("N degerini girin: ");
	scanf("%d", &N);
	
	sonuc = 0;
		
	for(i=1; i<=(2*N)+1; i=i+2){
		sum = 1;
		fakt = 1;
		for(j=1; j<=i; j++){
			sum = sum * x;
			fakt = fakt * j;	
		}
		temp = sum / fakt;
		if(i % 4 == 1){
			sonuc += temp;
		}
		else{
			sonuc -= temp;
		}
	}
		
	printf("%f", sonuc);
		
	

	return 0;
}
