#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int dyn_sting(char array)
{
    char inp[1];
    char *str = malloc(1);
    int str_pos = 0;

    printf("eingabe: ");
    while((inp[0] = getchar()) != '\n'){
        str = realloc(str,1+strlen(str)+1);
        strcat(str,inp);
        
    }
    printf("%s\n",str);
    return str;
}