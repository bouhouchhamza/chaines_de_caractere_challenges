#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char chaine[100];

    printf("veuiller entrer la chaine : ");
    fgets(chaine,100,stdin);

    for(int i=strlen(chaine);i>=0;i--)
        printf("%c",chaine[i]);



    return 0;
}
