
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


void swap_max(int a[], int l, int i)
{
    int max = a[i];
    int max_index = i;

    for(int j = i + 1; j < l; j++)
    {
        if(max < a[j])
        {
            max = a[j];
            max_index = j;
        }          
    }
    a[max_index] = a[i];
    a[i] = max; 
}

void ssort(int a[], int l)
{
    for(int i = 0; i < l; i++)
    {
        swap_max(a, l, i);
    }
}
