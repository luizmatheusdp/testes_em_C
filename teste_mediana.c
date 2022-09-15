
#include <stdio.h>
int main()
{
    
    int x , y , z, primeiro, segundo, terceiro;
    printf("Digite o primeiro valor real :");
    scanf("%d",&x);
    printf("Digite o segundo valor real :");
    scanf("%d",&y);
    printf("Digite o terçeiro valor real :");
    scanf("%d",&z);
    
    if(x<y && x<z ){
        primeiro = x; 
    }
    
    if(y<x && y<z ){
        primeiro = y; 
    }

    if(z<y && z<x ){
        primeiro = z; 
    }
            
    if(x<y && x>z){ segundo= x; }
    if(x>y && x<z){ segundo= x; }

    if(y<x && y>z){ segundo= y; }
    if(y>x && y<z){ segundo= y; }

    if(z<y && z>x){ segundo= z; }
    if(z>y && z<x){ segundo= z; }

    if(x>y && x>z ){
        terceiro = x; 
    }
    
    if(y>x && y>z ){
        terceiro = y; 
    }

    if(z>y && z>x ){
        terceiro = z; 
    }
    
    
    
    if(x==y && x<z ){
     primeiro=x;
     segundo=y;
     terceiro=z;
    } 
    if(x==z && x<y ){
     primeiro=x;
     segundo=z;
     terceiro=y;
    }
    if(y==z && y<x){
     primeiro=y;
     segundo=z;
     terceiro=x;
        
    }
    if(y==z && y>x){
     primeiro=x;
     segundo=z;
     terceiro=y;
        
    }    
    
    if(x==y && x>z ){
     primeiro=z;
     segundo=x;
     terceiro=y;
    } 
    if(x==z && x>y ){
     primeiro=y;
     segundo=x;
     terceiro=z;
    }
    
    if(x==y && x==z && z==y){
    primeiro=x;
    segundo=y;
    terceiro=z;    
    }

    printf("A mediana é %d" , segundo);
    return 0;
}
