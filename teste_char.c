#include <stdlib.h>
#include <stdio.h>

int main()
{  
char a[5]="12345";

printf("%c", a[5]);
// Quando tentamos escrevar usando uma posição maior ou igual ao tamanho do vetor, não é retornado nenhum valor, pois a posição 5 não tem valores atribuidos a ela  


printf("%c", a[-2]);    
// Se tentarmos usar uma posição negativa, nenhum valor será retornado, pois não tem como preencher os vetores que tem posições negativas.

}