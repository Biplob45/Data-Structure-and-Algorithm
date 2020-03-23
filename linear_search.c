// linear Search in C
#include <stdio.h>

int linear_search(int A[], int n, int x)
{
    int i;
    for(i = 0; i < n; i++){
        if(A[i] == x){
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int A[] = {3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(A) / sizeof(A[0]);
	int x = 3;
	int result = linear_search(A, n, x);
	if (result == -1)
		printf("Not found");
	else
		printf("Element is found at index %d", result);
	return 0;
}
