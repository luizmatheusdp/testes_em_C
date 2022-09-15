#include <stdio.h>

int main()
{
int a;
int *p1;
int *p2;

p1= &a;
p2 = p1;
a =123;
/* Sim é possivel acessar um ponteiro usando outro ponteiro, como é visto acima, primeiro precisamos estabelecer 
que esse ponteiro recebe o endereço de outro ponteiro que o proprio acessa uma variavel,logo dessa maneira os valores seram guardados.*/

scanf("%d",p2);

    printf("a = %d \n", a);
    printf("p = %p", p2);
    return 0;
}
