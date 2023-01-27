#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\t\t\t\t\tCalcular a progressao Geometrica.\n\n");
	
	int PG[10];
	int a;
	int r;
	
	printf("Informe o valor inicial: ");
	scanf("%d", &a);
	
	printf("Informe a razão: ");
	scanf("%d", &r);
	
	PG[0] = a;
	
	for(int i=1; i<10; i++){
		
		PG[i] = PG[i-1] * r;
	}
	
	for(int i=0; i<10; i++){
		printf("%d\t", PG[i]);
	}
	

	
	return 0;
}
