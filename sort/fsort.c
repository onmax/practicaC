#include "fsort.h"

void swap(int *a, int *b) {
  int t;
  t = *a;
  *a = *b;
  *b = t;
}

void fsort(int n, int *a) {
  int N = n;
  int i, j;
  /* TODO: hay un bug!!! */
  for (i = 0; i < N; i++) {
    for (j = i; j < N-1; j++) {
      if (a[j+1] < a[j]) {
	swap(&a[j], &a[j+1]);
      }
    }
  }
}

/* Implementación correcta
  for (i = 0; i < N; i++) {
    for (j = 0; j < N-i-1; j++) {
      if (a[j+1] < a[j]) {
	swap(&a[j], &a[j+1]);
      }
    }
  }
*/

     
