#include <stdlib.h>
#include <stdio.h>

int main()
{  
char a[4]="1234";
char b[4]="casa";

a[4]=b[4];
printf("%c", a[4]); // se atribuímos a = b da forma que esta acima, essa atribuição não vai funcionar,pois 
// estaremos apenas dizendo que o indice a[4] recebe o valor do indice b[4], portanto para fazer o vetor "a"
//receber os itens do vetor b, teremos que atribuir indice por indice, dessa maneira : 
/*a[0]=b[0];
a[1]=b[1];
a[2]=b[2];
a[3]=b[3];
ou fazendo uma estrutura de repetição para atribuir cada indice;
*/
}