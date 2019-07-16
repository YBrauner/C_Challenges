/*Yaron Brauner; s0571574; Aufgabe 7 */

#include <stdio.h>
#include <string.h>

double division(double num1, double num2){
    if ((num1 >= num2) && (num2 != 0)){
        return num1/num2;
    }
    else{
        printf("Error\n");
        return 0;
    }
}
 double divisionalt( double num1,  double num2){
    if ((num2 >= num1) && (num1 != 0)){
        return num2/num1;
    }
    else{
        printf("Error\n");
        return 0;
    }
}

int main()
{
    double num1=0;
    double num2=0;
    char act[7] ={0};
    int k=0;

    char add[] ={'a','d','d'};
    char sub[] ={'s','u','b'};
    char subalt[] ={'s','u','b','a','l','t'};
    char mult[] ={'m','u','l','t'};
    char divi[] ={'d','i','v','i'};
    char divialt[] ={'d','i','v','i', 'a','l','t'};

    printf("Bitte zwei Zahlen eingeben, erste Zahl: ");
    scanf("%lf",&num1);
    printf("\nZweite Zahl: ");
    scanf("%lf",&num2);

    printf("\nWelche Operation möchten sie durchführen?\nZum Addieren tippen sie 'add'\nZumSubtrahieren tippen sie 'sub' bzw 'subalt'\nZum Multiplizieren tippen sie 'mult'\nZum Dividieren tippen sie 'divi' bzw 'divialt'\n");
    printf("Eingabe: ");

    getchar();
    while ((act[k] = getchar()) != '\n'){
        k++;
    }
    printf("\n");
//ergebnisse der strcmp  vergleiche
//add = -105
//sub = -99
//subalt = -105
//mult = -90
//divi = -105
//divialt = 90

    if (strcmp(act,add) == -105){
        printf("Die Addition von %lf + %lf ergibt %lf.\n",num1,num2,num1+num2);
    }
    if (strcmp(act,sub) == -99){
        printf("Die Subraktion von %lf - %lf ergibt %lf.\n",num1,num2,num1-num2);
    }
    if (strcmp(act,subalt) == -105){
        printf("Die Subraktion von %lf - %lf ergibt %lf.\n",num2,num1,num2-num1);
    }
    if (strcmp(act,mult) == -90){
        printf("Die Multiplikation von %lf * %lf ergibt %lf.\n",num1,num2,num1*num2);
    }
    if (strcmp(act,divi) == -105){
        if (num2 == 0){
            printf("Error\n");
            return 0;
        }
        else{
            printf("Die Division von %lf / %lf ergibt %lf.\n",num1,num2,division(num1,num2));}
    }
    if (strcmp(act,divialt) == 90){
        if (num1 == 0){
            printf("Error\n");
            return 0;
        }
        else{
            printf("Die Subraktion von %lf / %lf ergibt %lf.\n",num2,num1,divisionalt(num1,num2));}
    }
    return 0;
}