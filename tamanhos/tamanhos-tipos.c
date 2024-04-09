#include <stdio.h>

int main()
{
  int a;

  printf("sizeof(a) = %ld bytes\n", sizeof(a));

  printf("sizeof(int) = %ld bytes\n", sizeof(int));
  printf("sizeof(short) = %ld bytes\n", sizeof(short));
  printf("sizeof(long) = %ld bytes\n", sizeof(long));
  printf("sizeof(unsigned long) = %ld bytes\n", sizeof(unsigned long));
  printf("sizeof(float) = %ld\n", sizeof(float));
  printf("sizeof(double) = %ld\n", sizeof(double));

  printf("sizeof(void *) = %ld\n", sizeof(void *));
  printf("sizeof(int *) = %ld\n", sizeof(int *));
  printf("sizeof(int **) = %ld\n", sizeof(int **));
  printf("sizeof(int ***) = %ld\n", sizeof(int ***));
  printf("sizeof(float *) = %ld\n", sizeof(float *));

  return 0;
}