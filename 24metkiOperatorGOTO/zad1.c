#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 10e-15
int main (){
    double a,b,c,d,x1,x2;
    goto entree;
    entree :
        printf("Enter a,b,c : ");scanf("%lf %lf %lf",&a,&b,&c);
    goto verif_deg;
    verif_deg:
        if (fabs(a)<M)
        {goto verif_b;
        }else{goto calcul_d;}
    verif_b:
        if (fabs(b)<M){
            goto verif_c;
            
        }else{
            goto solutionCb;    
        }
        goto end;
    solutionCb:
        printf("1 solution : x = %lf\n",-c/b);
        goto end;

    verif_c :
        if(fabs(c)<M){goto toutSol;
            }else{
                goto no;}
    toutSol :
        printf("Every real number is solution\n");
        goto end;

    calcul_d :
        d=b*b-4*a*c;
        goto verif_d_si;
    verif_d_si :  
        
        if(d<0.0){
            goto no;
        }else{
            goto verif_d_zero;
        }
    verif_d_zero:
        if(fabs(d)<M){
                goto solutionUni;            
            }else{
            goto solutionDeux;
            }
    solutionUni:
        printf("1 solution x = %lf\n",-b/(2*a));
        goto end;
    solutionDeux:
        printf("2 solutions x1 = %lf ; x2 = %lf\n",(-b-sqrt(d))/(2*a),(-b+sqrt(d))/(2*a)); goto end;

    no :
        printf("no solutions");
        goto end;
    end :
    return 0;
}
