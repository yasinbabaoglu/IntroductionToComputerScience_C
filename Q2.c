#include <stdio.h>

int main(){
	int i, j, min, max, digit, flag_min, flag_max, cube, down_limit, up_limit;
	
	printf("basamak: ");
	scanf("%d", &digit);
	
	down_limit = 1;
	for(i=0; i<digit-1; i++){
		down_limit = down_limit * 10;
	}
	
	up_limit = down_limit * 10;
	
	i = 1;
	flag_min = 0;
	flag_max = 0;
	
	
	while(flag_max == 0){
		cube = 1;
		for(j=0; j<3; j++){
			cube = cube * i;
		}
		if(cube >= down_limit && flag_min == 0){
			flag_min = 1;
			min = cube;
		}
		if(cube >= up_limit){
			flag_max = 1;
		}
		else{
			max = cube;
		}
		i++;
	}
	
	
	printf("minimum= %d, maximum= %d", min, max);
	
	
	return 0;
	
}
