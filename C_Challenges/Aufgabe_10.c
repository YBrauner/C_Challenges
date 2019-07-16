/*Yaron Brauner; s0571574; Aufgabe 10 */

/*Wandelt Kleinbuchstaben  der Eingabe in Großbuchstaben um Goroßbuchstaben der Eingabe in Kleinbuchstaben, lässt alle anderen Zeichen unberührt, sowie Zahlen*/

#include <stdio.h>
#define MAX 50

int main()
{
    char ch[MAX] = {0};
    int i=0;

    while ((ch[i] = getchar()) != '\n'){
        i++;
    }

    for (int j=0; j<i; j++){    //wenn Großbuchstabe dann Kleinbuchstabe ausgeben
        if ((ch[j] >= 'A') && (ch[j] <= 'Z')){
            printf("%c",ch[j]+32);
        }
        else if ((ch[j] >= 'a') && (ch[j] <= 'z')){ //Wenn Kleinbcuhstabe, dann Großbuchstabe ausgeben
            printf("%c",ch[j]-32);
        }
        else if (ch[j] == ' '){ //Leerzeichen als Leerzeichen ausgeben
            printf(" ");
        }
        else{   //Alle anderen Zhalen unberührt lassen
            printf("%c",ch[j]);
        }
    }
    printf("\n");
    return 0;
}