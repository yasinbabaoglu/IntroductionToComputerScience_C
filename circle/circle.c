#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void displayMatrix(int **matrix){
	int i, j;
	int row = sizeof(matrix) / sizeof(matrix[0]);
	printf("%d",row);
	for (i=0; i<row; i++){
		for (j=0; j<2; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");	
	}
}


float calc(int X, int Y, int Xi, int Yi){
	float temp_r=0;
	
	temp_r= sqrt(pow(Xi - X,2) + pow(Yi - Y,2));
	
	return temp_r;
}


void calcMat(int **matrix, int X, int Y, int r){
	int i;
	int row = sizeof(matrix) / sizeof(matrix[0]);
	float r_i;
	
	for(i=0; i<row; i++){
		r_i = calc(X, Y, matrix[i][0], matrix[i][1]);
		if(r_i > r){
			printf("(%d%d) : disinda\n", matrix[i][0], matrix[i][1]);
		}
		else if(r_i < r){
			printf("(%d%d) : icinde\n", matrix[i][0], matrix[i][1]);
		}
		else{
			printf("(%d%d) : ustunde\n", matrix[i][0], matrix[i][1]);
		}
	}
}

int **read(){
	FILE *file_input;
	int i, j, N=7, M=2,t1,t2;
	int **circle_matrix, **circle_matrix2;
	
	circle_matrix = (int**)calloc(N, sizeof(int*));
	for(i=0; i<N; i++){
		circle_matrix[i] = (int*)calloc(M, sizeof(int));
	}
	
	file_input = fopen("circle.txt", "r");
	if(file_input == NULL){
		printf("\nDosya bulunamadi");
		exit(1);
	}
	i = 0;
//	j = 0;
	while(!feof(file_input)){
		fscanf(file_input, "%d", &t1);	
		fscanf(file_input, "%d", &t2);	
		
		circle_matrix[i][0] = t1;
		circle_matrix[i][1] = t2;
/*		if (j == 2){
			i++;
			j=0;		
		}*/
		i++;
	}
	//printf("%d ", i);
	//displayMatrix(circle_matrix);	
	//free(file_input);
	/*
	for(j=0; j<i; j++){
		(circle_matrix2[j]) = (int*)realloc((circle_matrix[j]),M);
	}
	circle_matrix2 = (int**)realloc((circle_matrix),i);
	*/
	for (i=0; i<7; i++){
		for (j=0; j<2; j++){
			printf("%d ", circle_matrix[i][j]);
		}
		printf("\n");	
	}
	//displayMatrix(circle_matrix);
	return circle_matrix2;
}


int main(){
	int X, Y, r;
	int **cM;
	
	printf("X,Y: ");
	scanf("%d,%d", &X , &Y);
	printf("r: ");
	scanf("%d", &r);
	
	cM = read();
	displayMatrix(cM);
	calcMat(cM, X, Y, r);
	
	return 0;
}



