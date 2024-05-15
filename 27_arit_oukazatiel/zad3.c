#include <stdio.h>
double* fonction( double* a,double*b,double*c,double*d,double*e){
    double* table[]={a,b,c,d,e};
    int i=0,j=0,s,smin=0,ans;
    while(i<5){
        j=0;
        while(j<5){
            s+=(table[i]-table[j])? table[i]>table[j] : table[j]-table[i] ;   
            j++;        
        }
        if(s<smin){
            ans=i;
            smin=s;
        }
        i++;
    }
    return table[ans];
}