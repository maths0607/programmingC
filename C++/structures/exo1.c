
#include <stdio.h>
struct pwc {
        int n;
        int cutting[50];
        int values[50];
    };

struct pwc add(struct pwc a,struct pwc b){
    struct pwc res;
    res.values[0]=a.values[0]+b.values[0];
    int i=0,j=0,c=0;
    while (i<a.n || j<b.n){
        if( i==a.n){
            res.cutting[c]=b.cutting[j];
            
            j++;
            c++;
            res.values[c]=a.values[i]+b.values[j];
            continue;
        }
        if( j==b.n){
            res.cutting[c]=a.cutting[i];
            i++;
            c++;
            res.values[c]=a.values[i]+b.values[j];
            continue;
        }
        if(a.cutting[i]<b.cutting[j]){
            res.cutting[c]=a.cutting[i];
            //res.values[c+1]=a.values[i+1]+b.values[j];
            i++;
        }else{
            if(b.cutting[j]<a.cutting[i]){
                res.cutting[c]=b.cutting[j];
                //res.values[c+1]=a.values[i]+b.values[j+1];
                j++;
            }else{
                res.cutting[c]=a.cutting[i];
                //res.values[c+1]=a.values[i+1]+b.values[j+1];
                i++;
                j++;
            }
        }
        c++;
        res.values[c]=a.values[i]+b.values[j];
        
    }
    res.n=c;
    return res;
}
void print( struct pwc a){
    
    for(int i=0; i<a.n;i++){
        printf("%d\t",a.cutting[i]);
    }
    printf("\n");
    for(int i=0; i<a.n+1;i++){
        printf("%d\t",a.values[i]);
    }
    printf("\n");
}

int main()
{ struct pwc un, deux, trois;
    un.cutting[0]=-1;
    un.cutting[1]=1;
    un.values[0]=0;
    un.values[1]=1;
    un.values[2]=2;
    un.n=2;
    deux.cutting[0]=0;deux.values[0]=0;deux.values[1]=1;deux.n=1;
    trois=add(un,deux);
    print(trois);
    return 0;
}