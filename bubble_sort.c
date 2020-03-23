
//Bubble Sort in C
#include <stdio.h>

void bubble_sort(int A[], int n)
{
    int i,j, temp;
    //int count;
    for(i=0;i<n;i++)
    {
        //count++;
        for(j=0;j<n-i-1;j++)
        {

            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
            //printf("%d",count);
            //Output:1111222334
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
    bubble_sort(A, n);
    printf("Sorted array: \n");
    printArray(A, n);
    return 0;
}
