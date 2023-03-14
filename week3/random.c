#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#define N 10

int main(void) {

  int i = 0;

  struct timeval t;
  gettimeofday(&t, NULL);
  unsigned int seed_us = t.tv_sec * 1000000 + t.tv_usec;
  unsigned int seed_s = time(NULL);

  
  srand(seed_s);
  
  for (int i = 0; i < N; i++) {
    printf("%d ", rand() % 10);
  }
  printf(" | ");

  srand(seed_us);
  for (int i = 0; i < N; i++) {
    printf("%d ", rand() % 10);
  }
  printf("\n");
  return 0;
}

