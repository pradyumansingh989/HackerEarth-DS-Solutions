#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size, i;
	scanf("%d", &size);
	for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
	for(i = size-1; i>=0; i--)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}