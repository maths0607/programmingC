#include <stdio.h>
int copier(char *str1, char *str2){
    FILE* f1=fopen(str1 ,"r+");if(f1==NULL) return 1;
    FILE* f2=fopen(str2,"w+");if(f2==NULL) return 1;
    fputs("",f2);
    fclose(f2);
    FILE* f3=fopen(str2,"a");if(f3 == NULL) return 1;
    char a;
    while ((a=fgetc(f1) )!= EOF)
    {
        fputc(a,f3);
    }
    fclose(f1);
    fclose(f3);
    FILE *f4 = fopen(str1,"w");if(f1==NULL) return 1;
    fputs("",f4);
    fclose(f4);
    return 0;
    
}
int main () {
    char* premier="premier.txt";
    char* deuxieme="deuxieme.txt"; 
    copier(premier,deuxieme);
    return 0;
}