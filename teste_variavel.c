
#include <stdio.h>
#include <math.h>

int main ()
{

   int maior, menor, idade, i, pessoas;
   double media;
    
    do{

        printf("\n Digite a idade: ");
        scanf("%d", &idade);
        if(idade<0){
        printf("\n !!!!Digite uma idade valida ou encerre a leitura digitando '0': \n ");    
        }else{
        if(i==0){
           
            maior=idade;
            menor=idade;
            i++;
        }
        if(idade==0){
            break;
        }
        float numerodp[1];
        pessoas ++;

        if(idade>maior){
            maior = idade;
        }
        if(idade<menor){
            menor = idade;
        }
     
        }
    }while(i!=0);
    printf("\n\n número de pessoas: %d", pessoas);
    printf("\n\n Maior idade :: %d \n menor idade: %d ", maior, menor);
}
