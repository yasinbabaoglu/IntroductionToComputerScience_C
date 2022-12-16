#include <stdio.h>
int main(){
	int i, j, flag;
	char text1[100], text2[100];
	
	printf("Birinci metni girin: \n");
	gets(text1);
	printf("Ikinci metni girin: \n");
	gets(text2);
	
	i = 0;
	flag = 0; // eþleþen kelime yok
	
	while(flag == 0 && text1[i] != '\0'){
		j = 0;
		flag = 1; // eþleþen kelime var
		while(flag == 1 && text2[j] != '\0'){
			if (!(text1[i+j] == text2[j])){
				flag = 0;
			}
			j++;
		}
		i++;
	}
	if(flag == 1){
		printf("%d", i);
	}
	else{
		printf("Eslesen kelime yok.");
	}
	
	return 0;
}
