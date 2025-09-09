#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chain[50] ;
    int  longeur;


    printf("veuiller entrer chain de caractere : ");
    fgets(chain,sizeof(chain),stdin);

    for(longeur=0;chain[longeur]!='\0''\0' && chain[longeur] != '\n';longeur++);


             printf("la longeur de votre chain de caractere est : %d",longeur);




    return 0;
}
