#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char chaine[100];


    printf("veuiller entrer votre chaine :");
    fgets(chaine,100,stdin);

    for(i=0,chaine[i] != 0;i++){
        chaine[i]=tolower(chaine)
    }
    printf("votre chaine en minuscules est : %s", chaine);





    return 0;
}
