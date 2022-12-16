#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void displayBusStop(int M, int limit, int bus_stops[]){
	int i;
	for(i=0; i<M; i++){
		if(bus_stops[i] == limit){
			printf(" Stop %d",i+1);
		}
	}
}

void displayIdentical(int N, int max_identical, int identical[SIZE][SIZE]){
	int i, j;
	printf("\n\nThe most identical bus lines :");
	for(i=0; i<N; i++){
		for(j=i+1; j<N; j++){
			if(identical[i][j] == max_identical){
				printf("\nBus Line %d and Bus Line %d", i+1,j+1);
			}
		}
	}
}

int main(){
	int i, j, k, N, M, min, max, max_identical, sum, sum_identical, temp;
	int input[SIZE][SIZE], identical[SIZE][SIZE];
	int busline[SIZE], busline_index[SIZE], bus_stops[SIZE];
	FILE *file_input;
	
	file_input = fopen("q3.txt", "r");
	if(file_input == NULL){
		printf("\nDosya bulunamadi");
		exit(1);
	}
	
	fscanf(file_input, "%d", &N);
	fscanf(file_input, "%d", &M);
	
	i = 0;
	j = 0;
	while(!feof(file_input)){
		fscanf(file_input, "%d", &input[i][j]);
		printf("%d ", input[i][j]);
		j++;
		j %= M;
		if(j == 0){
			i++;
			printf("\n");
		}
	}
	
	for(i=0; i<N; i++){
		sum = 0;
		for(j=0; j<M; j++){
			if(input[i][j] == 1){
				sum = sum + 1;
			}
		}
		busline[i] = sum;
		busline_index[i] = i;
	}
	
	for(i=0; i<N; i++){
		for(j=i+1; j<N; j++){
			if(busline[i] < busline[j]){
				temp = busline[j];
				busline[j] = busline[i];
				busline[i] = temp;
				
				temp = busline_index[j];
				busline_index[j] = busline_index[i];
				busline_index[i] = temp;
			}
		}
		printf("\nBus Line %d: %d stops",busline_index[i]+1, busline[i]);
	}
	
	min = N;
	max = 0;
	for(j=0; j<M; j++){	
		sum = 0;
		for(i=0; i<N; i++){
			sum += input[i][j];
		}
		bus_stops[j] = sum;
		if(min > bus_stops[j]){
			min = bus_stops[j];
		}
		if(max < bus_stops[j]){
			max = bus_stops[j];
		}
	}
	
	printf("\n\nThe most busy bus stop :");
	displayBusStop(M, max, bus_stops);	
	printf("\nThe least busy bus stop :");
	displayBusStop(M, min, bus_stops);
	
	max_identical = 0;
	for(i=0; i<N; i++){
		for(k=i+1; k<N; k++){
			sum_identical = 0;
			for(j=0; j<M; j++){
				if(input[i][j] == input[k][j]){
					sum_identical++;
				}
			}
			identical[i][k] = sum_identical;
			if(max_identical < sum_identical){
				max_identical = sum_identical;
			}
		}
	}
	
	displayIdentical(N, max_identical, identical);

	return 0;
}
