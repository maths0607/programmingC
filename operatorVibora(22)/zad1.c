#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double number,copy;
    char first,second;
    printf("Enter data  : ");scanf("%lf %c %c",&number,&first,&second);
    copy = number;
    switch (first)
    {
    case 'g':
        /* code */
        number*=1.0;
        break;
    case 'k':
        number*=10e2;
        break;
    case 'c':
        number*=10e4;
        break;
    case 't':
        number*=10e5;
        break;
    
    default:
        printf("Error");
        return EXIT_FAILURE;
    }
    switch (second)
    {
    case 'g':
        /* code */
        number/=1.0;
        break;
    case 'k':
        number/=10e2;
        break;
    case 'c':
        number/=10e4;
        break;
    case 't':
        number/=10e5;
        break;
    
    default:
        printf("Error");
        return EXIT_FAILURE;
    }
    printf(" %lf %c = %lf %c \n",copy,first,number,second);
    return EXIT_SUCCESS;
}