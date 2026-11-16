# Student Result Calculation

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
