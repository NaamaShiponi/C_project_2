#include <stdio.h>
#include "my_mat.h"


int main()
{
    int arr[NUM_SALARIES][NUM_SALARIES];
    char codeFun;
    do
    {
        scanf("%c", &codeFun);
        if (codeFun == 'A')
        {
            insert(arr);
            floydWarshall(arr);
            // printArr(arr);
        }
        else if (codeFun == 'B')
        {
            int i, j;
            scanf("%d%d", &i, &j);
            ispath(arr, i,j);
        }
        else if (codeFun == 'C')
        {
            int i, j;
            scanf("%d%d", &i, &j);
            pathlen(arr,i,j);
        }
    } while (codeFun != 'D');

    return 0;
}

void printArr(int arr[NUM_SALARIES][NUM_SALARIES])
{
    printf("\nprint Naw\n");
    for (size_t i = 0; i < NUM_SALARIES; i++)
    {
        for (size_t j = 0; j < NUM_SALARIES; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}