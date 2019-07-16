#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20

struct list_node
    {
        char vorname[MAX];
        char name[MAX];
        struct list_node *nachfolger;
    };
struct list_node HEAD;
typedef struct list_node* node;

node add_first_list_element(/*Name als eingabevariable vom typ  char */  ) //frage: wenn add_first_list_element in main() aufgerufen wird, soll der Name des neuen Listenelementes, z.B. Element2, übergeben werden und ein neues listen element mit diesem namen erstellt werden, Z. 17/18.  Wenn ich jedoch im kopf "char Name[]" einsetze, geht gar nichts mehr
{
    struct list_node* Name; //dieser "Name" soll variabel sein
    Name = malloc(sizeof(struct list_node));
    printf("Vorame:");
    *Name->vorname = fgets(*Name->vorname,MAX,stdin);
    Name->vorname[strlen(*Name->vorname)-1] = '\0';
    printf("Sein Name:");
    fgets(*Name->name,MAX,stdin);
    Name->name[strlen(*Name->name)-1] = '\0';
    HEAD.nachfolger = Name;
    return Name;
}

int main()
{



    char name_input[MAX];
    add_list_element(HEAD,fgets(,MAX));

    
    //struct list er;

    //nachfolger sie = (nachfolger) malloc(sizeof(struct list));
    //struct list sie;//sie ist bereits def
    /*sie->name = name;
    sie->nachfolger = er.nachfolger;*/
    //er.nachfolger = sie;
/*
    printf("Ihr Vorame: ");
    fgets(sie->vorname,MAX,stdin);
    sie->vorname[strlen(sie->vorname)-1] = '\0';
    printf("Ihr Name: ");
    fgets(sie->name,MAX,stdin);
    sie->name[strlen(sie->name)-1] = '\0';

    printf("Sie heisst: %s  %s\n",sie->vorname,sie->name);
    printf("Er heisst: %s %s\n",er.vorname,er.name);
*/
    
    return 0;
}

