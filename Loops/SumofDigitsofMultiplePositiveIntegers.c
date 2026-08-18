#include <stdio.h> 
 
int main() { 
    int num, temp, digit, sum; 
 
    while (1) { 
 
        scanf("%d", &num); 
 
        if (num == 0) 
            break; 
 
        temp = num; 
        sum = 0; 
 
        while (temp > 0) { 
            digit = temp % 10; 
            sum = sum + digit; 
            temp = temp / 10; 
        } 
 
        printf("Sum of digits of %d = %d\n", num, sum); 
    } 
 
    return 0; 
}    
