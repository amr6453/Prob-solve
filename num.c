#include <stdio.h>
#include "cs50.h"

void num(int n);
int main(void)
{
  int k;
  do
  {
    k = get_int("rows: ");
  }
  while (k < 1 || k > 12);
  for (int i = 0; i <= k; i++)
  {
    num(i - k);
    printf("\n");
  }
}
void num(int n)
{
  int nu = 0;
  for (int i = 0; i > n; i--)
  {
    nu++;
    printf("%i", nu);
  }
}