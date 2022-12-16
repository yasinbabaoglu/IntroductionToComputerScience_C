#include <stdio.h>
#include <stdlib.h>

void inputMatrix(int N, int M, int matrix[50][50], FILE *file_input){
	int i, j;
	
	for (i=0; i<N; i++){
		for (j=0; j<M; j++){
			fscanf(file_input, "%d", &matrix[i][j]);
			printf("%d ", matrix[i][j]);
		}
		printf("\n");	
	}
	printf("\n");
}

void displayMatrix(int N, int M, int matrix[50][50]){
	int i, j;
	
	for (i=0; i<N; i++){
		for (j=0; j<M; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");	
	}
}

int main (){
	int N1, M1, N2, M2, i, j, k, sum;
	int matrix1[50][50], matrix2[50][50], result_matrix[50][50];
	FILE *file_input;
	
	
	file_input = fopen("matris_carpma.txt", "r");
	if(file_input == NULL){
		printf("\nDosya bulunamadi");
		exit(1);
	}
	
	fscanf(file_input, "%d", &N1);
	fscanf(file_input, "%d", &M1);
	fscanf(file_input, "%d", &N2);
	fscanf(file_input, "%d", &M2);
	
	inputMatrix(N1, M1, matrix1, file_input);
	inputMatrix(N2, M2, matrix2, file_input);
	
	if(M1 != N2){
		printf("\nMatrix error");
		return 2;		
	}
	
	for(i=0; i<N1; i++){
		for(j=0; j<M2; j++){
			sum = 0;
			for(k=0; k<M1; k++){
				sum += matrix1[i][k] * matrix2[k][j];
			}
			result_matrix[i][j] = sum; 
		}
	}
		
	displayMatrix(N1,M2,result_matrix);
		
	free(file_input);
	
	return 0;
	
}

