#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\t\t\t\t\tCalcular a progressao aritmetica.\n\n");
	
	int PA[10];
	int a;
	int r;
	
	printf("Informe o valor inicial: ");
	scanf("%d", &a);
	
	printf("Informe a razão: ");
	scanf("%d", &r);
	
	PA[0] = a;
	
	for(int i=1; i<10; i++){
		
		PA[i] = PA[i-1] + r;
	}
	
	for(int i=0; i<10; i++){
		printf("%d\t", PA[i]);
	}
	

	
	return 0;
}
