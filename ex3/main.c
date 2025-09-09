#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chain1[50]= "HELLO";
    char chain2[]= " world";

    strcat(chain1, chain2);

    printf("result : %s",chain1);





    return 0;
}
