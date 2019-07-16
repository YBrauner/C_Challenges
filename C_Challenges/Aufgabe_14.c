/*Yaron Brauner; s0571574; Aufgabe 14 */

#include <stdio.h>
#define MAX 15 //maximale Stellen derBinärzahl

int potenz(int xpo){ //errechnung der höchsten Zahl abhängig der Anzahl der Binärstellen
    int result=1;
    int sum = 0;
    for (int i=0; i<xpo; i++){
        result  = result*2 ;
        sum = sum + result;
    }
    return sum+1;
}

int main()
{
    int input;
    printf("Bitte Zahl <= %i eingeben: ",potenz(MAX));
    scanf("%i", &input);

    int calc_inp  = input;
    int res = 0;
    int rest;
    int binrev[MAX] = {0};
    int countbin = 0;
    int val = 1;
    int count_index_bin = 0;

    while (val == 1){
        res =  0;
        printf("%i",calc_inp);
        while(calc_inp >= 2){ //durch 2 teilen und rest ermitteln
            calc_inp = calc_inp -2;
            res++;
        }
        printf(" / 2 = %i, rest %i\n",res, calc_inp);
        if(calc_inp == 1){ //wenn rest 1 dann an index countbin in binrev eine 1, sonst 0
            binrev[countbin] = 1;
        }
        else  if(calc_inp == 0){
            binrev[countbin]= 0;
        }
        countbin++;
        calc_inp = res; //calc_bin wird zu neuem ergebnis der division
        if(res == 0){ //abbruch der schleife wenn ergebnis der division 0 ist, egal ob rest 1 oder 0
            val = 0;
        }
        count_index_bin++;
    }
    printf("Die Zahl %i zur Basis 10 (Dezimalzahl) lautet: ", input);
    for (int i=(MAX-1); i>=0; i--){ //ausgabe des umgedrehten arrays binrev, also der binärzahl in richtiger Richtung
        printf("%i", binrev[i]);
    }
    
    printf(" zur Basis 2 (Binärzahl).\n");
    return 0;
}