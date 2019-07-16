/*Yaron Brauner; s0571574; Aufgabe 18 */

#include <stdio.h>
#define MAX 15

union musik //union initialisieren
{
    struct{ //struct mit den chars 
    char Album[MAX];
    char Interpret[MAX];
    char Titel[MAX];
    };
    struct{ //struct mit der double variable
    double Dauer;
    };
    struct{ //strcut mit der int variable
    int DateiGroesse;
    };
};

int main()
{
    union musik musik;  //name der union deklarieren
    int k =0;
    int kk = 0;
    int kkk =0;
    int countAlb = 0;
    int countInt =0;
    int countTit =0;

    printf("Bitte Album Name angeben: ");   //eingabe des album namens
    while((musik.Album[k] = getchar()) != '\n'){    //speichern in musik.Album
        k++;
        countAlb++;
    }
    printf("Album Name: ");
    for(int i=0; i<countAlb; i++){  //ausgabe von album name, noch vor eingabe eines weiteren elements. union wird nur als zwischenspeicher genutzt
        printf("%c",musik.Album[i]);
    }    

    printf("\nBitte Interpret angeben: ");
    while((musik.Interpret[kk] = getchar()) != '\n'){
        kk++;
        countInt++;
    }
    printf("Interpret: ");
    for(int i=0; i<countInt; i++){
        printf("%c",musik.Interpret[i]);
    }

    printf("\nBitte Titel angeben: ");
    while((musik.Titel[kkk] = getchar()) != '\n'){
        kkk++;
        countTit++;
    }
    printf("Titel: ");
    for(int i=0; i<countTit; i++){
        printf("%c",musik.Titel[i]);
    }

    printf("\nBitte Dauer angeben: ");
    scanf("%lf",&musik.Dauer);
    printf("Dauer: %lf",musik.Dauer);

    printf("\nBitte Datei Groesse angeben: ");
    scanf("%i",&musik.DateiGroesse);
    printf("DateiGroesse: %i\n",musik.DateiGroesse);

    return 0;
}