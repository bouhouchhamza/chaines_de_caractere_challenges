#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char chaine[100];
    char caracter;
    int comp = 0 ;

    printf("veuiller entrer la chaine de caractere : ");
    fgets(chaine,100,stdin);

    printf("veuiller entrer la caratere : ");
    scanf(" %c",&caracter);

    for(int i=0;chaine[i]!='\0';i++){
        if(chaine[i]==caracter){
        comp++;
     }
     }
   printf("le caractere %c est apparait %d fois .",caracter,comp);



    return 0;
}
