#include<stdio.h>

int main()
{
    
    int n;
    int sum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);
    
   int array[n];
  
    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }

    printf("Sum of elements = %d\n", sum);

    return 0;
}
