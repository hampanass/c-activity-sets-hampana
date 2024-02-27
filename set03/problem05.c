#include <stdio.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
  int n = input_array_size();
  int a[10000];
  init_array(n,a);
  eratosthenes_sieve(n,a);
  output(n,a);
  return 0;
}

