#include <stdio.h>
#include <stdlib.h>
int main()
{
int n = 0;
printf(" notes : ");scanf("%d",&n);
printf("mention %c ", 'A'+9-(int)(n/10));
return EXIT_SUCCESS;
}