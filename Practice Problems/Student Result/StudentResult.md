# Student Result Calculation

**Course:** Introduction to Computer Systems (ICS)  
**Language:** C  
**Difficulty:** Beginner

## Exam Question

Write a C program that reads marks for five subjects, calculates the total and average, and displays Pass if every subject has at least 40 marks; otherwise, display Fail. Assume each subject is marked out of 100.

## Input

Five subject marks, each between 0 and 100.

## Expected Output

Total marks, average, and Pass/Fail result.

## Solving Approach

1. **Understand the question:** Identify the input values and the result required.
2. **Plan the logic:** Use a loop to read five marks and an array to store them. Validate each mark, calculate the total and average, and check whether any mark is below 40.
3. **Implement in C:** Use suitable variables, operators, and control structures.
4. **Test the program:** Compare the program's result with the sample output and try additional values.

## C Solution

```c
#include <stdio.h>

int main(void)
{
    float marks[5], total = 0.0f, average;
    int i, passed = 1;

    for (i = 0; i < 5; i++)
    {
        printf("Enter marks for subject %d (0-100): ", i + 1);

        if (scanf("%f", &marks[i]) != 1)
        {
            printf("Invalid input\n");
            return 1;
        }

        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Marks must be between 0 and 100\n");
            return 0;
        }

        total += marks[i];

        if (marks[i] < 40)
        {
            passed = 0;
        }
    }

    average = total / 5.0f;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);

    if (passed)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    return 0;
}
```

## Sample Input

```text
80
75
60
85
70
```

## Sample Output

```text
Total = 370.00
Average = 74.00
Result: Pass
```

## Concepts Used

- Arrays
- Loops
- Conditional statements
- Input validation

## How to Compile and Run

Compile with GCC:

```bash
gcc StudentResult.c -o StudentResult
```

Run on Linux or macOS:

```bash
./StudentResult
```

Run on Windows:

```bash
StudentResult.exe
```

## Exam Tip

Before writing the code in an exam, identify the required formula or condition, write the steps in order, and check the solution with the sample input. Pay attention to data types, format specifiers, and boundary cases.

---

*Part of the ICS C Programming practice repository.*
