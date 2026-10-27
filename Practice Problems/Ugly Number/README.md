# Check Whether a Number Is an Ugly Number

Write a C program to check whether a given positive integer is an ugly number. An ugly number has no prime factors other than 2, 3, and 5.

## Solving Approach

Repeatedly divide by 2, 3, and 5 while divisible. If the remaining value is 1, the number has no other prime factors and is ugly.

## Algorithm

1. Start.
2. Read and validate the required input.
3. Apply the calculation or checks described in the solving approach.
4. Display the result.
5. Stop.

## Sample Input

```text
Enter a positive integer: 30
```

## Sample Output

```text
Ugly number.
```

## Concepts Used

- Variables and input/output
- Loops and conditional statements
- Arithmetic or bitwise operators, as required
- Input validation

## Compile and Run

```bash
gcc UglyNumber.c -o UglyNumber
```

Run with `./UglyNumber` on Linux/macOS or `UglyNumber.exe` on Windows.
