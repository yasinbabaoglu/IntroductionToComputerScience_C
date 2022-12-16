#include <stdio.h>

int main(){
	int N = 26;
	int i, index, a[N];
	char text[1000];
	
	printf("metin gir: \n");
	scanf("%s", &text);
	
	for (i=0; i<N; i++){
		a[i] = 0;
	}
	
	i=0;
	while(text[i] != 0){
		if(text[i]>='a' && text[i]<='z'){
			index=text[i]-'a';
			a[index]++;
		}
		i++;
	}
	
	for(i=0; i<N; i++){
		printf("%c: %d\n",'a'+i,a[i]);
	}
	
	return 0;
}
