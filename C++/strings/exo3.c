#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
char* suppresseur(char *premier, char *second ){
    char *occ=strstr(premier,second);
    int length = strlen(second);
    if(occ == NULL) return premier;
    char *rest; rest=occ+length;
    strcpy(occ,"\0");
    strcat(premier,rest);
    return premier;

}
int main(){
    char ex1[100]="le voleur voler 1", ex2[100]="vol";
    printf("%s\n",suppresseur(ex1,ex2));
    return 0;
}
//Question je l'avais ecrit avec * ca ne marchait pas ca ne marche qu'avec []