//Insertion Sort in C

#include <stdio.h>

void insertion_sort(int A[], int n)
{
    int i,j,item;
    for(i=1;i<n;i++)
    {
        item = A[i];
        j = i - 1;
        while(j>=0 && A[j] > item)
        {
            A[j+1] = A[j];
            j = j - 1;
        }
        A[j+1] = item;
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
    int A[] = {4,3,2,10,12,1,5,6};
    int n = sizeof(A)/sizeof(A[0]);
    insertion_sort(A, n);
    printf("Sorted array: \n");
    printArray(A, n);
    return 0;
}
