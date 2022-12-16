#include <stdio.h>
#include <string.h>

struct insan{
	int yas;
	char isim[10];
	struct insan *child;
	struct insan *father;
};

int main(){
	struct insan ahmet, mehmet;
	ahmet.yas = 25;
	strcpy(ahmet.isim, "ahmet");
	ahmet.child = NULL;
	ahmet.father = &mehmet;
	
	mehmet.yas = 25;
	strcpy(mehmet.isim, "mehmet");
	mehmet.child = &ahmet;
	mehmet.father = NULL;

	printf("%s", mehmet.child->isim);
	printf("\n%s", ahmet.father->isim);
	
	printf("\ninsan: %d byte", sizeof(struct insan));
	
	free(ahmet.father);
	free(ahmet.child);
	free(mehmet.father);
	free(mehmet.child);
		
	return 0;	
	
}
