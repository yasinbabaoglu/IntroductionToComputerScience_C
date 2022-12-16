#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


float calc(int X, int Y, int Xi, int Yi){
	float temp_r=0;
	
	temp_r= sqrt(pow(Xi - X,2) + pow(Yi - Y,2));
	
	return temp_r;
}


void calcMat(int N, int X, int Y, int r){
	int i,random_x,random_y;
	float r_i;
	srand(time(NULL));
	
	
	for(i=0; i<N; i++){
		random_x = rand()%9+3;
		random_y = rand()%9+3;
		
		r_i = calc(X, Y, random_x, random_y);
		if(r_i > r){
			printf("(%d,%d) : disinda\n", random_x, random_y);
		}
		else if(r_i < r){
			printf("(%d,%d) : icinde\n", random_x, random_y);
		}
		else{
			printf("(%d,%d) : ustunde\n", random_x, random_y);
		}
	}
}


int main(){
	int X, Y, N, r;
	
	printf("N: ");
	scanf("%d", &N);
	printf("X,Y: ");
	scanf("%d,%d", &X , &Y);
	printf("r: ");
	scanf("%d", &r);
	
	calcMat(N, X, Y, r);
	
	return 0;
}



