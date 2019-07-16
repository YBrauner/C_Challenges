/*Yaron Brauner; s0571574; Aufgabe 8 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int main()
{
    char input[MAX] = {0};
    char cmp[MAX]  = {'t','e','s','t','1','2','3','4','t','e','s','t'};
    int  i = 0;

    printf("Bitte Passwort eingeben maximal %i Zeichen): ",MAX); 
    system("stty -echo");  //versteckt die eingabe
    system("stty raw"); //deaktiviert {RETURN|ENTER}|{CTRL+C}|{CTRL+D}, \r nötig um eingabe zu beenden (im code). in der Eingabe reicht enter zu drücken

    while ((input[i] = getchar()) != '\r'){ // ließt das pw ein (den string)
        if (input[i] == 127){
            input[i] == 0;
            printf("\b \b");
            i--;
        }
        else{
            system("stty  echo");   //versteckt die zeichen nicht mehr
            printf("*");    //gibt ein * pro eingegebenes Zeichen aus
            system("stty  -echo");  //verteckt die eingabe wieder
            i++;
        }
    }
    system("stty echo");    //versteckt die Zeichen nicht mehr
    system(" stty cooked ");    //Reaktiviert alles
    printf("\n");
    
    int check = strcmp(cmp,input);  //Vergleich des Input strings mit dem cmp String (voreingestelltes pw)
    if (check == -13){  //strcmp liefert -13 zurück, da im eingegebenen string das \r mit eingelesen wird und im ascii den  Code 13 hat (differenz der beiden String arrays)(-13 durch 0 ersetzen, wenn benutzer  auch cmp array string eingiebt)
        printf("Eingabe Korrekt\n");
    }
    printf("%i\n",check);
/*
    for(int p=0; p<MAX; p++){
        printf("utgghj %c",input[p]);
    }*/
    return 0;
}


//geht noch nicht
//backspace geht noch nicht
