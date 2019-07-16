#include<stdio.h>
#define PATH "Aufgabe_20.txt"
FILE* r;

int writefile(int wert){    //globale funtion zum Schreiben des Wertes "wert" in "zaehler.txt"
    r = fopen(PATH,"w");
    fputc(wert, r);
    return 0;
}

int readfile(){ //globale Funktion zum auslesen des nächsten Chars aus "zaehler.txt"
    r = fopen(PATH,"a");   //falls "zaehler.txt" nicht existiert wird es erstellt, falls doch wird es durchs das öffnen nicht verändert wie bei "w"
    fclose(r);
    r = fopen(PATH,"r");
    return (fgetc(r));
}

int main()
{
    int count_open = readfile();    //"count_open" hat den wert aus dem file
    
    if((count_open == 10) || (count_open==-1)){   //wenn das der 11. aufruf des Programms ist, dannist das auch der erste
        remove(PATH);  //Datei muss nicht gelöscht werden, var wert kann auch einfach wieder auf 1 gesetzt werden (aber da vorgegeben)
        count_open = 1;
        writefile(count_open);  //setze wert in file = 1
        printf("Dies ist der %ite Eintrag.\n",count_open);
        return 0;
    }
    else{
        count_open++;
        writefile(count_open);  //erhöhe wert in file um 1
        fclose(r);
        printf("Dies ist der %ite Eintrag.\n",count_open);
        return 0;
    }
}