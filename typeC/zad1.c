
/*_Bool, char, short int, int, long int, long long int, float, double, long double.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
  setlocale(LC_ALL, "Russian");
  printf("Размер значения типа _Bool равен %ld байтов.\n", sizeof(_Bool));
  printf("Размер значения типа char равен %ld байтов.\n", sizeof(char));
  printf("Размер значения типа short int равен %ld байтов.\n", sizeof(short int));
  printf("Размер значения типа int равен %ld байтов.\n", sizeof(int));
  printf("Размер значения типа long int равен %ld байтов.\n", sizeof(long int));
  printf("Размер значения типа long long int равен %ld байтов.\n", sizeof(long long int));
  printf("Размер значения типа float равен %ld байтов.\n", sizeof(float));
  printf("Размер значения типа double равен %ld байтов.\n", sizeof(double));
  printf("Размер значения типа long double равен %ld байтов.\n", sizeof(long double));
  
  return EXIT_SUCCESS;
}