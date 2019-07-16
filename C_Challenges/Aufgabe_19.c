/*Yaron Brauner; s0571574; Aufgabe 19 */

#include <stdio.h>

int result_pow = 1;
int expo_count = 0;

int power (int basis,int expo){
    if(expo > 0){
        result_pow = (result_pow*basis);
        expo_count++;
        if (expo_count < expo){
            power(basis,expo);
            return result_pow;
        }
    }
    else if(expo == 0){
        result_pow = 1;
        return result_pow;
    }
    else{
        result_pow = (result_pow*basis);
        expo_count--;
        if (expo_count >= (expo+1)){
            power(basis,expo);
            return result_pow;
        }
    }
}



int main ()
{
    int basis = 0, exponent = 0;
    printf("Bitte basis eingeben: ");
    scanf("%i",&basis);
    printf("\nBitte Exponent eingeben: ");
    scanf("%i",&exponent);
    if(exponent < 0){
        printf("Ergebnis: 1/%i\n",power(basis,exponent));
        return 0;
    }
    printf("Ergebnis: %i\n",power(basis,exponent));


    return 0;
}