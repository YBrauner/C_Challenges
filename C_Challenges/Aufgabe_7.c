/*Yaron Brauner; s0571574; Aufgabe 7 */

#include <stdio.h>
#include <string.h>
#define MAX 50

int main()
{
    char mail[MAX]={ 0 }; //Array muss ausreichend lang sein
    int i=0;
    int locat; //location von @
    int locat_dot;
    int valid_name;
    int valid_domain;
    int valid_top_level;

    printf("Bitte e-mail Adresse eingeben: ");
    while ((mail[i] = getchar()) != '\n'){
        i++;
    }

    //locat_end_input = Anzahl Zeichen -1
    int locat_end_input = i-1;
    //check locat @

    for (int j=0; j<MAX; j++){
        if (mail[j] == '@'){
            locat = j;
        }
    }
    if (locat >= MAX){
        printf("Error, invalid email-address\n");
        return 0;
    }

    //check locat_dot

    for (int d=locat; d<MAX; d++){
        if (mail[d] == '.'){
            locat_dot = d;
        }
    }
    if (locat_dot >= MAX){
        printf("Error no valid e-mail address");
        return 0;
    }
    //test zur ausgabe der email
    for (int a=0;  a<MAX; a++){
    }
    //validation des Namens bis @, funkts noch nicht: warning "comparis"
    for(int k=0; k<locat; k++){
        if (((mail[k] >= 'a') && (mail[k] <= 'z')) || ((mail[k] >= 'A') && (mail[k] <= 'Z')) || ((mail[k] >= '0') && (mail[k] <= '9'))){
            valid_name = 0; //0 = valid, 1 = false
        }
        else{
            valid_name = 1; //wenn false, dann aus der schleife raus
            break;
        }
    }

    //Prüfen der Domain (in diesem Programm sind nur folgende Zeichen gültig: a-z, A-Z, 0-9).
    for (int l=locat+1; l<locat_dot; l++){
        if (((mail[l] >= 'a') && (mail[l] <= 'z')) || ((mail[l] >= 'A') && (mail[l] <= 'Z')) || ((mail[l] >= '0') && (mail[l] <= '9'))){
            valid_domain = 0;
        }
        else{
            valid_domain = 1;
        }
    }

    //Prüfen auf top-level domain (in diesem Prgramm nur gültig: '.com', '.net', '.de', '.org')

    //erstmal array für suffix mit 3 bzw 2 zeichen mit den Zeichen aus mail nach dem . befüllen
    char top_drei[3]={};
    char top_zwei[2]={};

    //string arrays für top level domains initialisieren um sie per strcmp zu vergleichen
    char org[]={"org"};
    char net[]={"net"};
    char com[]={"com"};
    char de[]={"de"};

    int top_bool;//wahrschenlich unnötig, könnte auch direkt valid_top_level verwenden

    //count variablen für nachfolgende schleifen
    int count_top_drei;
    int count_top_zwei;

    // check ob top level 3 oder 2 zeichen --> vergleich  des jeweiligen array  mit einem der drei 3 zeichen arrays oder dem de array

    if ((locat_end_input - locat_dot) == 3){
        for(count_top_drei=0; count_top_drei<3; count_top_drei++){
             top_drei[count_top_drei]=mail[locat_dot+1+count_top_drei];
        }
        //prfüen ob top_drei = org, net oder com

        if ((strcmp(top_drei,org) == 100) || (strcmp(top_drei,net) == 100) || (strcmp(top_drei,com) == 100)){
            top_bool = 0;
        }
        else{
            printf("Error, Top Level Domain drei ungültig\n");
            return 0;
        }
    }

    if ((locat_end_input - locat_dot) == 2){
        for(count_top_zwei=0; count_top_zwei<2; count_top_zwei++){
             top_drei[count_top_zwei]=mail[locat_dot+1+count_top_zwei];
        }
        //Prüfen ob top level domain = de

        if (strcmp(top_zwei,de) == -100){
            top_bool = 0;
        }
        else{
            printf("Error, Top level Domail zwei ungültig\n");
            return 0;
        }
    }
    valid_top_level = top_bool;
    //Ausgabe wenn adresse korreckt ist
        
    if ((valid_name == 0) && (valid_domain == 0) && (valid_top_level == 0)){
        printf("E-Mail Adresse gültig.\n");
    }

    return 0;
}