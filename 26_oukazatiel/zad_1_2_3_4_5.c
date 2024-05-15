#include <stdio.h>
#include <stdlib.h>
int main(){
    //1
    double *dou;
    char *chr;
    float *flo1, *floa2;
    void *voi;
    typedef _Bool* pointBool ;
    typedef  unsigned int* pointInt ;

    /*

    /*
    //
    double s=3.14, *p=&s;
    //2
    int x,y,z=x+y, *q=&z;
    //3
    int x1=0,y1=7,*p1=&x;*p1=&y;
    //4
    //* result:16
    */
    //6
    printf("value: %d pointer :%p\n",*p,p);
    //7
    printf("INT = %ld ;CHAR = %ld; DOUBLE = %ld ",sizeof(int*),sizeof(char*),sizeof(double*));


}