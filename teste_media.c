
#include <stdio.h>
#include <math.h>
int main()
{
    int x , y;
    double a , g;
    printf("Digite um valor real :");
    scanf("%d",&x);
    printf("Digite outro valor real :");
    scanf("%d",&y);
    a = (x+y)/2.0;
    g = sqrt(x*y);

    printf("A media aritmética é = %lf \nA media geométrica é = %lf ", a , g);

    return 0;
}
