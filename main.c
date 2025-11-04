<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "array_utils.h"
#include "matrix_utils.h"

static void fill_arr(int *a,int n){ for(int i=0;i<n;i++) a[i]=rand()%101-50; }
static int** alloc_m(int r,int c){
  int **m = (int**)malloc(r*sizeof(*m));
  for(int i=0;i<r;i++){ m[i]=(int*)malloc(c*sizeof(*m[i]));
    for(int j=0;j<c;j++) m[i][j]=rand()%101-50; }
  return m;
}
static void free_m(int**m,int r){ for(int i=0;i<r;i++) free(m[i]); free(m); }

int main(){
  int a[10]; fill_arr(a,10);
  int ch = flip_max_abs_array(a,10);
  printf("Array changes (v18): %d\n", ch);

  int **M = alloc_m(3,4);
  ch = flip_max_abs_in_each_row(M,3,4);
  printf("Matrix changes (v18): %d\n", ch);
  free_m(M,3);
  return 0;
}
=======
// simple program
// dev version
// dev version for variant 18
>>>>>>> dev
