#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
        double number, result=0;
        char operation ='+';
        int i=1;
       do
       {
        if (i%2 == 1){
            printf("enter number : ");scanf("%lf",&number);fgetc(stdin);
            switch (operation)
                {
                case '+':
                    result+=number;    
                    break;
                case '-':
                    result-=number;
                    break;
                case '*':
                    result*=number;
                    break;
                case '/':
                    result/=number;
                    break;
                default:
                    printf("error");
                    break;
                }
        }
        else{
            printf("enter operation : ");scanf("%c",&operation);
        }
        i++;

       } while(operation != '=');
       printf("%lf \n",result);
       
    return EXIT_SUCCESS;
}