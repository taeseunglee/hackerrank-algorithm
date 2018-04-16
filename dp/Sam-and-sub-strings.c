#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007 // 10^9+7

/* global variables */
int n;
long long int res;

void __init__(void);
void __process__(void);
void __print_out__(void);

int main()
{
  __init__();
  __process__();
  __print_out__();

  return 0;
}

void __init__(void)
{
  scanf("%d", &n);
}

void __process__(void)
{
}

void __print_out__(void)
{
  printf("%lld\n", res);
}
