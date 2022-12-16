#include <stdio.h>

int fact(int i){
	int j, fakt = 1;
	for(j=1; j<=i; j++){
		fakt = fakt * j;	
	}
	return fakt;
}

float us(int i, int x){
	int j;
	float sum = 1;
	for(j=1; j<=i; j++){
		sum = sum * x;
	}
	return sum;
}

float result(int i, int x, float sonuc){
	float temp = us(i, x) / fact(i);
	
	if(i % 4 == 1){
		sonuc += temp;
	}
	else{
		sonuc -= temp;
	}
	return sonuc;
}

int main (){
	int i, j, N, x;
	float sonuc, temp;
			
	printf("x degerini girin: ");
	scanf("%d", &x);
	printf("N degerini girin: ");
	scanf("%d", &N);
	
	sonuc = 0;	
	for(i=1; i<=(2*N)+1; i=i+2){
		sonuc = result(i, x, sonuc);
	}	
	printf("%f", sonuc);
		
	return 0;
}
