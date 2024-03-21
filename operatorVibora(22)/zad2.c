#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double number,number2,result;
    char sign;
    printf("Enter calculation : ");scanf("%lf %c %lf",&number,&sign,&number2);
    switch (sign)
    {
    case '+':
        result=number+number2;    
        break;
    case '-':
        result=number-number2;
        break;
    case '*':
        result=number*number2;
        break;
    case '/':
        result=number/number2;
        break;
    default:
        printf("error");
        break;
    }
    printf("%lf %c %lf = %lf",number,sign,number2,result);
    return EXIT_SUCCESS;
}