#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    char chaine[100];


    printf("veuiller entrer votre chaine : ");
    fgets(chaine,100,stdin);

    for(int i=0;chaine[i]!=0;i++){
            chaine[i]=toupper(chaine[i]);
        }
    printf("votre chaine en majuscules est : %s ", chaine);



    return 0;
}
