
#include <stdio.h>


int main ()
{

   int i,x;
   i=0;
    x=0;   
while(i<=10);{/*O  bloco de comando foi interrompido pelo ';', ou seja o while não tem como executar o comando das chaves pois ele não pertence aquele bloco de comando.   */
    printf("%d \n",i);
    i++;
 
}
while(x<=5){
    printf("\n %d \n",x);
    x++;
 
}
 return 0;
}
