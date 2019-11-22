#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char nome[100];
   int idade;
   printf("Digite seu nome:\n");
   scanf("%s",&nome);
   printf("Digite sua idade:\n");
   scanf("%d",&idade);
   printf("\n%s, %d anos.\n", nome, idade);
   system("pause");
   return 0;
}
