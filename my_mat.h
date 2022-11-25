#ifndef MY_MAT_H
#define MY_MAT_H
#include <stdbool.h>
#define NUM_SALARIES 10

void floydWarshall(int arr[NUM_SALARIES][NUM_SALARIES]);
void insert(int arr[NUM_SALARIES][NUM_SALARIES]);
void ispath(int arr[NUM_SALARIES][NUM_SALARIES],int i,int j);
void printArr(int arr[NUM_SALARIES][NUM_SALARIES]);
void pathlen(int arr[NUM_SALARIES][NUM_SALARIES],int i,int j);
#endif