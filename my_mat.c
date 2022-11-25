#include <stdio.h>
#include "my_mat.h"
#define MIN(a, b) ((a) < (b) ? (a) : (b))

void floydWarshall(int arr[NUM_SALARIES][NUM_SALARIES])  
{
    for (int k = 0; k < NUM_SALARIES; k++)
    {
        for (int i = 0; i < NUM_SALARIES; i++)
        {
            if(i!=k){
            for (int j = 0; j < NUM_SALARIES; j++)
            {
                if(j!=k){
                if (arr[i][j] > (arr[i][k] + arr[k][j]) || arr[i][j]==0 )
                {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
                }
            }
            }
        }
    }
    // printArr(arr);
}

void insert(int arr[NUM_SALARIES][NUM_SALARIES])
{
    for (size_t i = 0; i < NUM_SALARIES; i++)
    {
        for (size_t j = 0; j < NUM_SALARIES; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void ispath(int arr[NUM_SALARIES][NUM_SALARIES],int i,int j)
{
    //TODO arr[i][j] when i==j 
    if(arr[i][j]==0) {
        printf("False\n");
    }else  printf("True\n");
}

void pathlen(int arr[NUM_SALARIES][NUM_SALARIES],int i,int j)

{
    //TODO arr[i][j] when i==j 
    if(arr[i][j]==0) {
        printf("-1\n");
    }else  printf("%d\n",arr[i][j]);
}


