#include<stdio.h>

int main()
{
    
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

  int array[n];
  
    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Array elements: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

  printf("Traversing the array:\n");

    for(int i = 0; i < n; i++)
    {
        printf("Element at index %d = %d\n", i, array[i]);
    }

    return 0;
}
