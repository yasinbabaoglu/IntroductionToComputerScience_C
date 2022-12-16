#include <stdio.h>


int main(){
	int i, j, N = 10, M=5;
	int dizi[10];
	int *dizi_m, *dizi_c, *dizi_r;
	int **matris_m, **matris_c;
	
	dizi_c = (int*)calloc(N, sizeof(int));
	dizi_m = (int*)malloc(N*sizeof(int));
	
	printf("\ncalloc dizi\n");
	for(i=0; i<N; i++){
		printf("%d ",dizi_c[i]);
	}
	printf("\n");

	printf("\nmalloc dizi\n");
	for(i=0; i<N; i++){
		printf("%d ",dizi_m[i]);
	}
	printf("\n");
	
	dizi_r = (int*)realloc(dizi_c, M);

	/****************************************/

	matris_c = (int**)calloc(N, sizeof(int*));
	for(i=0; i<N; i++){
		matris_c[i] = (int*)calloc(M, sizeof(int));
	}

	matris_m = (int**)malloc(N*sizeof(int*));
	for(i=0; i<N; i++){
		matris_m[i] = (int*)malloc(M*sizeof(int));
	}
	
	printf("\ncalloc matris\n");
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			printf("%d ", matris_c[i][j]);
		}
		printf("\n");
	}
	
	printf("\nmalloc matris\n");
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			printf("%d ", matris_m[i][j]);
		}
		printf("\n");
	}	
	
	printf("\nint: %d", sizeof(int));
	
	free(dizi_c);
	free(dizi_m);
	for(i=0; i<N; i++){
		free(matris_c[i]);
	}
	free(matris_c);
	for(i=0; i<N; i++){
		free(matris_m[i]);
	}
	free(matris_m);
	
	return 0;
}
