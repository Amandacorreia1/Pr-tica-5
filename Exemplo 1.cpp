#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    printf("\t\t\t\tMostrar o maior e o menor n�mero digitado.\n\n");	
	int v[10];
	int maior, menor, menor_i, maior_i;
	
	
	for(int i=0; i<10; i++){
		printf("Informe %d� valor: ", i+1);
		scanf("%d", &v[i]);
	}
	
	maior = v[0];
	maior_i = 0;
	menor = v[0];
	menor_i= 0;
	
	for(int i=0; i<10; i++){
		if(maior< v[i]){
			maior = v[i];
			maior_i = i;
		}
		if(menor> v[i]){
			menor = v[i];
			menor_i = i;
		}
	}
	printf("\n\n");
	printf("O maior valor �: %d e est� na posi��o %d\nO menor valor �: %d e est� na posi��o %d\t", maior,maior_i+1 , menor, menor_i+1);

	return 0;
}
