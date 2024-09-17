#include <stdio.h>
#include <stdlib.h>
//UN tri interssant Mathias :)
void triFusion(int i, int j, int *tab, int *tmp) {
    if(j <= i){ return;}
  
    int m = (i + j) / 2;
    
    triFusion(i, m, tab, tmp);     //let's sort the left
    triFusion(m + 1, j, tab, tmp); //the right

    int pg = i;     //pg  and pd use to know the next small number to put 
    int pd = m + 1; 
    int c;          

    for(c = i; c <= j; c++) {
        if(pg == m + 1) { //at the end
            tmp[c] = tab[pd];
            pd++;
        }else if (pd == j + 1) { //at the end
            tmp[c] = tab[pg];
            pg++;
        }else if (tab[pg] < tab[pd]) { //found the smaller in left
            tmp[c] = tab[pg];
            pg++;
        }else {  //find tje smaller in the right
            tmp[c] = tab[pd];
            pd++;
        }
    }

    for(c = i; c <= j; c++) {  //copier les éléments de tmp[] à tab[]
        tab[c] = tmp[c];
    }
}


int main2() {
  int  nbr, i, tab[100], tmp[100]; 
  printf(" number of elemtents: ");
  scanf("%d", &nbr);
  printf(" Entrez %d numbers : ", nbr);
  for (i = 0; i < nbr; i++)
    scanf("%d", &tab[i]);
  triFusion(0, nbr-1, tab, tmp);
  printf("\n sort done : ");
  for(i = 0; i < nbr; i++)  {
     printf(" %4d", tab[i]);
  }
  printf("\n");
  return 0;
}
int main() {
    int arr[100],temp[100];
    for(int i=0;i<100;i++){
        arr[i]=rand()%1000;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    triFusion(0,99,arr,temp);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
