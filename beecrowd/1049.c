#include <stdio.h>
 

void animal(char tipo[], char classe[], char ordem[]);

int main()
{
    char tipo[20], classe[20], ordem[20]; 
    scanf("%s %s %s", tipo, classe, ordem);
    animal(tipo, classe, ordem); 
    return 0;
}

void animal(char tipo[], char classe[], char ordem[])
{
    if(tipo=="vertebrado") {
        if(classe=="ave") {
            if(ordem=="carnivoro"){
                printf("aguia");
            } else if(ordem=="onivoro"){
                printf("pomba");
            }
        } else if(classe=="mamifero") {
            if(ordem=="onivoro") {
                printf("homem");
            } else if("herbivoro") {
                printf("vaca");
            }
        }
    } else if(tipo=="invertebrado") {
        if(classe=="inseto") {
            if(ordem=="hematofago") {
                printf("pulga");
            } else if(ordem=="herbivoro") {
                printf("lagarta");
            }
        } else if (classe=="anelideo") {
            if(ordem=="hematofago") {
                printf("sanguessuga");
            } else if(ordem=="onivoro") {
                printf("minhoca");
            }
        }
    }
}
