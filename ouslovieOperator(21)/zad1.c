#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int hour, minute;
    printf("Enter the time h m :");scanf("%d %d",&hour,&minute);
    if(!((hour < 9 ) || (hour >= 18)))
    {
        if(((hour == 13) && (minute >=30) ) || ((hour == 14) &&(minute<=30))){
         printf("CLOSE\n");
        }
        else{ printf("OPEN\n");}

    }else{
        printf("CLOSE\n");
    }

    return EXIT_SUCCESS;
}