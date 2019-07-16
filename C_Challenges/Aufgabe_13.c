/*Yaron Brauner; s0571574; Aufgabe 13 */

#include <stdio.h>
#define MAX 100

int main()
{
    char alph[26];
    int c = 0;
    int count[26] = {c};
    char input[MAX];
    int counter = 0;

    for(int i=0; i <26; i++){
        alph[i] = 97 + i;
    }
    
    int j = 0;
    printf("Bitte Zeichenkette eingeben:  ");
    while((input[j] = getchar()) != '\n'){
        j++;
        counter++;
    }

    for (int i=0; i<26; i++){
        c =  0;
        for (int j=0; j<counter; j++){
            if((alph[i] == input[j]) || ((alph[i]-32) == (input[j]))){
                count[i] = ++c;
            }
        }
    }
    for(int k=0; k<26; k++){
        printf("%c ", alph[k]);
    }
    printf("\n");
    for(int k=0; k<26; k++){
        printf("%i ", count[k]);
    }
    printf("\n");
    return 0;
}