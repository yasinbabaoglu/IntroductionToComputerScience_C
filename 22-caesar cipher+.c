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
	a = a % 26;
	i = 0;
	while(text[i] != '\0'){
		if(text[i] >= 'a' && text[i] <= 'z'){
			if(text[i] + a > 'z'){
				encrypt[i] = (text[i] + a) % 'z' + 'a' - 1;
			}
			else{
				encrypt[i] = text[i] + a;
			}
		}
		else if(text[i] >= 'A' && text[i] <= 'Z'){
			if(text[i] + a > 'Z'){
				encrypt[i] = (text[i] + a) % 'Z' + 'A' - 1;
			}
			else{
				encrypt[i] = text[i] + a;
			}	
		}
		else{
			encrypt[i] = text[i];
		}
			
		i++;
	} 
	encrypt[i] = '\0';
		
	printf("encrypt: %s", encrypt);
	
	i = 0;
	while(encrypt[i] != '\0'){
		if(encrypt[i] >= 'a' && encrypt[i] <= 'z'){
			if(encrypt[i] - a < 'a'){
				decrypt[i] = 'z' - ('a' - (encrypt[i] - a)) + 1;
			}
			else{
				decrypt[i] = encrypt[i] - a;
			}
		}
		else if(encrypt[i] >= 'A' && encrypt[i] <= 'Z'){
			if(encrypt[i] - a < 'A'){
				decrypt[i] = 'Z' - ('A' - (encrypt[i] - a)) + 1;
			}
			else{
				decrypt[i] = encrypt[i] - a;
			}	
		}
		else{
			decrypt[i] = encrypt[i];
		}
		i++;
	}
	decrypt[i] = '\0';
	
	printf("\ndecrypt: %s", decrypt);
}
