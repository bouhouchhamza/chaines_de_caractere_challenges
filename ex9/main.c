#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[100];
    int i , j=0;

    printf("veuiller entrer votre chaine :");
    fgets(chaine,100,stdin);

    chaine[strcspn(chaine, "\n")] = '\0';



    for(i=0;chaine[i]!='\0';i++){
        if(chaine[i]!=' '){
            chaine[j] =chaine[i];
            j++;
        }
    }
    chaine[j]='\0';
    printf("votre chaine sans espace est : %s", chaine);




    return 0;
}
