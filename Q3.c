#include <stdio.h>
int main(){
	int i, j, k, N, M, min, max, max_identical, sum, sum_identical, temp;
	int input[100][100], identical[100][100];
	int busline[100], busline_index[100], bus_stops[100];
	
	printf("N: ");
	scanf("%d", &N);
	printf("M: ");
	scanf("%d", &M);
	
	
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			printf("%d. satir %d. sutun: ", i+1,j+1);
			scanf("%d", &input[i][j]);
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
	for(i=0; i<M; i++){
		if(bus_stops[i] == max){
			printf(" Stop %d",i+1);
		}
	}
	
	printf("\nThe least busy bus stop :");
	for(i=0; i<M; i++){
		if(bus_stops[i] == min){
			printf(" Stop %d",i+1);
		}
	}
	
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
	
	printf("\n\nThe most identical bus lines :");
	for(i=0; i<N; i++){
		for(j=i+1; j<N; j++){
			if(identical[i][j] == max_identical){
				printf("\nBus Line %d and Bus Line %d", i+1,j+1);
			}
		}
	}
		
	return 0;
}
