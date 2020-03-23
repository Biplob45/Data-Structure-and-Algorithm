#include <stdio.h>

void selection_sort(int A[], int n)
{
    int i,j,index_min, temp;
    for(i = 0;i<n-1;i++)
    {
        index_min = i;
        for(j=i+1;j<n;j++)
        {
            if(A[j] < A[index_min])
            {
                index_min = j;
            }
        }
        if(index_min != i)
        {
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
    }
}

void printArray(int A[], int n)
{
    int i;
    for (i=0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    int A[] = {64, 25, 12, 22, 11};
    int n = sizeof(A)/sizeof(A[0]);
    selection_sort(A, n);
    printf("Sorted array: \n");
    printArray(A, n);
    return 0;
}
