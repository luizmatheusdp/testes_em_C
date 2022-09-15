
#include <stdio.h>
int main()
{
    
    int x , y;
    printf("Digite um valor real :");
    scanf("%d",&x);
    printf("Digite outro valor real :");
    scanf("%d",&y);
    
    if(x==y){
     printf("Eles são iguais");    
    }else{
     if(x>y){
        printf("O numero %d é maior que o numero %d" , x , y); 
     }else{
        printf("O numero %d é maior que o numero %d" , y , x); 
     }
        
    }
    
        
   


    return 0;
}
