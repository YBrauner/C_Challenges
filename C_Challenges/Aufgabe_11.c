/*Yaron Brauner; s0571574; Aufgabe 11 */

#include <stdio.h>
#define CODE 3
#define MAX 100

int main()
{
    char mother[2][26] = {0};    //zweidimensionales Array initialisieren mit 26 Elementen je
    char input[MAX] = {0};
    char encrypted[MAX] = {0};
    int count_input = 0;
    int m = 0;

    for (int i=0; i<26; i++){   //erste Zeile mit A-Z belegen
        mother[0][i] = 65+i;
    }
    for (int j=CODE; j<26; j++){ //zweite Zeile Ab Element CODE Elemente mit A bis (Z-Code) belegen
        mother[1][j] = (65+(j-CODE));
    }
    for (int k=0; k<=(CODE-1); k++){ //erste CODE Elemente der zweiten Zeile mit mit Z-CODE bis Z belegen
        mother[1][k] = (90-(CODE-1))+k;
    }
    
    printf("Bitte Text eingeben, Eingabe mit ';' und ENTER beenden: ");
    
    while((input[m] = getchar()) != ';'){
        m++;
        count_input++;
    }

    //herausfinden von pos_char_encrypted des input char in dem mother[2]

    int pos_input_char_normal;
    int pos_char_encrypted = 0;
    
    for (int i=0; i<count_input; i++){
        for (int j=0; j<26; j++){
            /*if (input[i] == 32){
                encrypted[pos_char_encrypted] = 32;
                pos_char_encrypted++;
            }*/
            /*else*/ if (mother[0][j] == input[i]){
                encrypted[pos_char_encrypted] = mother[1][j];
                pos_char_encrypted++;
            }
            else if (mother[0][j] + 32 == input[i]){
                encrypted[pos_char_encrypted] = mother[1][j] + 32;
                pos_char_encrypted++;
            }
        }
    }

    for (int i = 0; i<MAX; i++){
        printf("%c",encrypted[i]);
    }

    printf("\n");
    return 0;
}