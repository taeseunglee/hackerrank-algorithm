#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MOD 1000000007 // 10^9+7
#define MAX_SIZE 200005

/* global variables */
char num[MAX_SIZE];
long long int res;

void __init__(void);
void __process__(void);
void __print_out__(void);
char* readline();

int main()
{
  __init__();
  __process__();
  __print_out__();

  return 0;
}

void __init__(void)
{
  fscanf(stdin, "%s", num);
}

void __process__(void)
{
  res = 0;
  int len = strlen(num);
  long long int weight = 1;
  for (int n_i = len-1, freq = len; n_i > -1; --n_i, --freq)
    {
      res = (res + (num[n_i]-'0')*weight*freq) % MOD;
      weight = (weight*10+1) % MOD;
    }
}

void __print_out__(void)
{
  printf("%lld\n", res);
}
