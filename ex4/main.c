#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine1[100];
    char chaine2[100];

    printf("veuiller entrer la chaine de caratere 1 : ");
    fgets(chaine1,100,stdin);

    printf("veuiller entrer la chaine de caratere 2 : ");
    fgets(chaine2,100,stdin);

    int result = strcmp(chaine1,chaine2);

    if(result==0){
        printf("les deux chaine de caractere est identitiques . ");
    }else{
        printf("les deux chaine de caratere est diffirent .");
    }

    return 0;
}
