#include <stdio.h>
#include <stdlib.h>

int main() {
	int Classe,Forca,Destreza,Inteligencia, Vitalidade;
	printf(" 1 - Lobisomem:\n");
	printf(" 2 - Vampiro:\n" );
	printf(" 3 - Bruxa:\n" );
	printf("escolha o seu personagem:\n");
	scanf("%d", &Classe);
	switch (Classe){
		case 1 :
			printf("escolhido o Lobisomem, atributos:\n");
			Forca = 78;
			Destreza = 89;
			Inteligencia = 56;
			Vitalidade = 90;
			printf("forca %d, destreza %d, inteligencia %d, vitalidade %d: \n", 
			Forca,Destreza,Inteligencia,Vitalidade);
			break;
		case 2 :
			printf("escolhido o Vampiro, atributos: \n");
			Forca = 75;
			Destreza = 80;
			Inteligencia = 88;
			Vitalidade = 78;
			printf("forca %d, destreza %d, inteligencia %d, vitalidade %d: \n", 
			Forca,Destreza,Inteligencia,Vitalidade);
			break;
		case 3 :
			printf("escolhido o Bruxa, atributos: \n");
			Forca = 83;
			Destreza = 79;
			Inteligencia = 81;
			Vitalidade = 69;
			printf("forca %d, destreza %d, inteligencia %d, vitalidade %d: \n", 
			Forca,Destreza,Inteligencia,Vitalidade);
			break;
			
		default:
			printf("Classe invalida: \n");
   }

   int main(){
        int Classe, Forca, Destreza, Inteligencia, Vitalidade;
        char nome[10];
        Classe = EscolheClasse ();
        printf("Digite o nome do personagem: ");
        scanf("%s", Classe);
        printf("Seja bem vindo %s ", Classe);
   
   return 0; 
   }
}

