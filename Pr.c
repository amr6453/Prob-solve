#include <stdio.h>
#include "cs50.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int num[5] = {1, 2, 3, 4, 5};
    int max = 0;
    int i = 0;
    int j = num[i + 1];
    for (int i = 0; num[i] != '\0';i++)
    {
       if (i < j)
       {
       	max = j;
       }
       else
       {
       	max = i;
       }
    }
    printf("%i\n", max);
    printf("%i\n", j);
    printf("%i\n", num[i]);
}