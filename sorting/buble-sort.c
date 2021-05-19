#include <stdio.h>

void buble_sort(int *list[], int len)
{

    int i, j, temp, swapped;

    for (i = 0; i < len; i++)
    {
        swapped = 0;
        for (j = 0; j < len; j++)
        {
            if (list[j] > list[j + 1])
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                swapped = 0;
                if (swapped)
                    break;
            }
        }
    }
}
