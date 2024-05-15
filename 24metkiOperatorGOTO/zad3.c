#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N=0,sign=1;
    char entry;
    printf("Enter : ");scanf("%c",&entry);fgetc(stdin);
    goto verif1;
    verif1 :
        if ((48<=entry && entry<=57) || entry == 45){
         goto verif_;   
        }
    else{goto is_not_number;}
    verif_ :
        if (entry==45){
               goto signe_;
            }else{
                goto veri_n0;    
            } 
    signe_:
        sign=-1;
        goto entry;
    veri_n0:
            N=entry-'0';
            if (N==0){
            goto entrer_ver_0;
            }else{
                goto entry;
             }
    entrer_ver_0:
        printf("Enter : ");scanf("%c",&entry);fgetc(stdin);
            goto entry_32;

    is_not_number :
        printf("NOt a number\n");
        //printf("%d\n",entry);
        goto end;
    entry_32:
        if (entry==32){
            goto verif_0_neg;
            
        }else{
            goto is_not_number;
        }
    verif_0_neg:
        if ( N == 0 && sign == -1){
                goto is_not_number;
            }else{
                goto sortie;                
            }
    sortie :
            N=N*sign;
            printf("Result %d\n",N);
            goto end;
    
    entry :
        printf("Enter : ");scanf("%c",&entry);fgetc(stdin);
        goto principal_entry;
    principal_entry:
        if (48<=entry && entry<=57){
                //printf("%d\n",N);
                goto calculDeN;
                
            }else{
                goto entry_32;
            }
    calculDeN:
    N=N*10+entry-'0';
        goto veri_0_with_;
                //printf("%d\n",N);
    veri_0_with_:
                if (N==0 && sign==-1){
                    goto is_not_number;
                }else{goto entry;}
    end :
    return 0; 
}