#include <stdio.h>
// CAESAR CIPHER
void main(){
	int i, a;
	char text[100], encrypt[100], decrypt[100];
	
	printf("bir sayi girin: ");
	scanf("%d", &a);
	printf("bir metin girin: ");
	scanf("%s", &text);
	
	// deneme => efofnf => deneme
	
	i = 0;
	while(text[i] != '\0'){
		encrypt[i] = text[i] + a;	
		i++;
	} 
	encrypt[i] = '\0';
		
	printf("encrypt: %s", encrypt);
	
	i = 0;
	while(encrypt[i] != '\0'){
		decrypt[i] = encrypt[i] - a;
		i++;
	}
	decrypt[i] = '\0';
	
	printf("\ndecrypt: %s", decrypt);
}
