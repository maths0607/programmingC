#include <stdio.h>
#include <math.h>
float* fonction( float* a , float* b){
    float* res= a + (int) round( 5.0*(b-a)/8); 
    return res;

}
int main(){
    float t[]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0};
    //printf("%f : %p\t %f:%p\n",t[0],&t[0],t[4],&t[4]);
    printf("%f\n",*fonction(&t[0],&t[7]));
    return 0;
}