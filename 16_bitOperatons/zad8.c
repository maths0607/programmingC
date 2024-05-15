#include <stdio.h>
#include <stdlib.h>
/*
этот алгоритм работает поэтапно:
1) У нас есть первая позиция 0, которая находится слева от 1, отметим эту позицию k (справа налево)
2) в позиции k поставим 1, а в позиции k-1 0
3) тогда давайте поместим все 1 а, которые находятся в позициях ниже k-1, в самые нижние позиции
пример:
12 = 01100
1) к =4
2) у нас будет 10100
3) 10001
поэтому результат будет 17*/
int main (){
    unsigned int n,x,x2,n1,k,inf,sup;
    printf("Enter the number :");scanf("%d",&n);
    n1=~(n|(n-1));
    //находим позицию первого 0 слева от 1
    x = n1 ^ (n1 & (n1-1));
    //маска положения этого нуля и 1, которая следует сразу за ним
    x2 = x + (unsigned int ) x/2;
    // давайте поменяем их местами (1 становится 0, а противоположная занимает свои позиции)
    n = n ^ x2;
    //ищем маску, которая позволит нам
     //чтобы занять нижнюю часть в нулевой позиции
    x=(unsigned int ) (x/2 - 1);
    inf = n&x;
    //верхнюю часть нуля оставляем нетронутой
    sup=n-inf;
    // ищем первую единицу в inf
    
    k= inf ^ (inf & (inf-1));
    k += (k==0);
    //поэтому нам придется разделить inf, потому что 
    //но если k равно нулю, то inf=0 ничего не нужно менять
    inf =  inf / k ;

    // суммируем и отображаем
    printf("result : %d\n",sup+inf);
    
    return EXIT_SUCCESS;
}