#include <stdio.h>
#include <stdlib.h>

/*** global variables ***/
int n;
int *arr;
/************************/

void __init__(void);
void __process__(void);
void __print_out__(void);

int main()
{
  int q;
  scanf("%d", &q);

  for (int q_i = 0; q_i < q; ++q_i)
    {
      __init__();
      __process__();
      __print_out__();
    }

  return 0;
}

void __init__(void)
{
  arr = calloc(n, sizeof(int));
}

void __process__(void)
{
}

void __print_out__(void)
{
}
