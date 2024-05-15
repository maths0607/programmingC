#include <stdio.h>
void starline(int n,char c){
    int i;
    for(i = 0; i < n; i++) printf("%c",c); printf("\n");
}
int main()
{
    starline(50,'=');
    printf("Title: Program 1\n");
    starline(60,'-');
    printf("The end\n");
    starline(70,'*');
    return 0;
}