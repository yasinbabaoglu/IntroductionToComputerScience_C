#include <stdio.h>

void func(int dizi[], int N){
	int i;
	
	for(i=0; i<N; i++){
		dizi[i] += 2;
	}
	
}

void func_a_p(int *a){
	*a = *a+2;
}

int func_a_int(int a){
	a = a+2;	
	return a;
}

void func_a(int a){
	a = a+2;
}

int main(){
	int i, a,b;
	int *p_a,*p_b;
	
	a = 5;
	b = 31;
	
	p_a = &a;
	p_b = &b;
	
	*p_a = *p_a + *p_b;
	
	printf("%d %d %d\n", p_a, *p_a, a);
	func_a(a);
	printf("%d %d %d\n", p_a, *p_a, a);
	func_a_p(p_a);
	printf("%d %d %d\n", p_a, *p_a, a);
	a = func_a_int(a);
	printf("%d %d %d\n", p_a, *p_a, a);
	
	
	int *p_dizi, dizi[10] = {10, 5, -85, 65, 987};
		
	func(dizi, 10);
	
	p_dizi = &dizi;
	
	for (i=0; i<10; i++){
		printf("\n%d %d %d", p_dizi+i, *(p_dizi+i), dizi[i]);
	}
	
	free(p_a);
	free(p_b);	
	free(p_dizi);	
	
	return 0;
}
