#include <stdio.h>

int main(){
    FILE* fp=fopen("g.txt","r");
    if(fp==NULL) return 1;
    char name[20];
    int math, phy;
    while(fscanf(fp,"%s\t%d\t%d\n",name,&math,&phy) == 3){
        printf("%s\t%d\t%d\t%d\n",name,math,phy,phy+math);
    }
    fclose(fp);
    
    }