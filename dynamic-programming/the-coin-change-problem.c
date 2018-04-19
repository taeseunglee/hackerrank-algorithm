#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 251
/*** global variables ***/
int n; // target amount
int m; // number of denominations
int *coins;
long long int dp[MAX_SIZE];
/************************/

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
  scanf("%d %d", &n, &m);
  coins = (int*) calloc(m, sizeof(int));
  for (int c_i = 0; c_i < m; ++c_i)
    scanf("%d", &coins[c_i]);
}

void __process__(void)
{
  dp[0] = 1;
  for (int c_i = 0; c_i < m; ++c_i) {
    for (int v = coins[c_i]; v <= n; ++v)
      dp[v] += dp[v-coins[c_i]];
  }
}

void __print_out__(void)
{
  printf("%lld", dp[n]);
}
