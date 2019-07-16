/*Yaron Brauner; s0571574; Aufgabe 3 */

#include <stdio.h>

int main()
{
    char string[5]={0};
    int c = 0;
    char check;
    
    while ((check = getchar()) != '\n'){
        if (((check >= 65) && (check <= 90)) || ((check >= 97) && (check <= 122)) || ((check >= 48) && (check <= 57)) || (check == '.') || (check == ',') || (check == '-')){
            string[c] = check;
            c++;
            if (c == 5){
                break;
            }
        }
    }

    for (int i=0; i<5; i++){
        printf("%c",string[i]);
    }

    printf("\n");
    return 0;
}