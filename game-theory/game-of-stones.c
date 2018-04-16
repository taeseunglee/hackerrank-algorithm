#include <stdio.h>
#include <stdbool.h>

#define MAX_NUM 101

bool fw[MAX_NUM] = { 0, 0, 1, 1, 1}; // first player wins

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
}

void __process__(void)
{
  int remove_stones[3] = {2, 3, 5};

  for (int i = 5; i < 101; ++i)
    {
      for (int s_i = 0; s_i < 3; ++s_i)
        {
           fw[i] |= !fw[i-remove_stones[s_i]];
        }
    }
}

void __print_out__(void)
{
  int n, T;
  scanf("%d", &T);

  for (int t_i = 0; t_i < T; ++t_i)
    {
      scanf("%d", &n);
      printf("%s\n", fw[n] ? "First" : "Second");
    }
}
