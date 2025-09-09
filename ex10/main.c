#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chainepr[100];
    char chainesou[100];
    char *res; ;

    printf("veuiler entrer le main chaine : ");
    fgets(chainepr,100,stdin);
    chainepr[strcspn(chainepr, "\n")] = '\0';

    printf("veuiller entrer sous-chaine : ");
    fgets(chainesou,100,stdin);
    chainesou[strcspn(chainesou, "\n")] = '\0';

    res = strstr(chainepr, chainesou);
    if(res != NULL ){
        printf(" Sous-Chaîne  existe : %s ",res);
    }else{
        printf("sous-chaine no pas trove.");
    }





    return 0;
}
