#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    char nom[5],new1[100],new2[100];
    scanf("%99s",nom);
    strcpy(new1,nom);
    strcpy(new2,nom);
    char *point= strrchr(new1,'.');
    strcpy(point,".html");
    printf("new name with .html : %s\n",new1);
    
    char *barre=strrchr(new2,'/');
    strcpy(barre,"\0");
    barre=strrchr(new2,'/');
    printf("%s\n",barre+1);
    
}