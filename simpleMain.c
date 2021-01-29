#include<stdio.h>
#include<stdlib.h>
#include"bubble.h"
#include"swap.h"

int main(int argc, char **argv){
  printf("There are %d arguments\n",argc-1);
  int i,N;
  N = argc-1;

  int *a;
  a = (int *)malloc(sizeof(int)*N);

  for(i=1;i<argc;i++)
  {
    printf("argument#%d is %d\n",i, atoi(argv[i]));
  }

bubble(a,N);
return 0;
}
