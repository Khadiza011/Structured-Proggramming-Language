# Check Whether a Number Is an Armstrong Number

Write a C program to check whether a given non-negative integer is an Armstrong number or not.

An Armstrong number is a number equal to the sum of its digits, where each digit is raised to the power of the total number of digits in the number.

**Examples:**

- `153` is an Armstrong number because \(1^3 + 5^3 + 3^3 = 153\).
- `370` is an Armstrong number because \(3^3 + 7^3 + 0^3 = 370\).
- `123` is not an Armstrong number because \(1^3 + 2^3 + 3^3 = 36\).

## Solving Approach

1. Read a non-negative integer from the user.
2. Store the original number in a separate variable.
3. Count the total number of digits.
4. Extract each digit using the modulus operator (`%`).
5. Raise each digit to the power of the digit count and add the result to `sum`.
6. Remove the last digit using integer division (`/`).
7. Compare `sum` with the original number.
8. Display whether the number is an Armstrong number.

## Algorithm

1. Start.
2. Input `num`.
3. If the input is invalid or negative, display an error and stop.
4. Store `num` in `original`.
5. Count the digits in `num`.
6. Reset a temporary variable to `original` and set `sum = 0`.
7. Extract each digit and calculate its power using the digit count.
8. Add each powered digit to `sum`.
9. If `sum == original`, display `Armstrong number`.
10. Otherwise, display `Not an Armstrong number`.
11. Stop.

## Sample Input

```text
Enter a non-negative integer: 153
```

## Sample Output

```text
153 is an Armstrong number.
```

## Step-by-Step Explanation

Consider the number `153`.

The number contains three digits, so each digit is raised to the power of `3`.

| Digit | Calculation | Result |
|---:|---|---:|
| 1 | \(1^3\) | 1 |
| 5 | \(5^3\) | 125 |
| 3 | \(3^3\) | 27 |

Sum = 1 + 125 + 27 = 153

Since the sum equals the original number, **153 is an Armstrong number**.

## Additional Test Cases

| Input | Expected Output |
|---:|---|
| `153` | Armstrong number |
| `370` | Armstrong number |
| `371` | Armstrong number |
| `407` | Armstrong number |
| `123` | Not an Armstrong number |
| `0` | Armstrong number |

## Concepts Used

- `while` and `do-while` loops
- `for` loop
- Modulus operator (`%`)
- Integer division (`/`)
- Digit extraction
- Accumulator variable
- Input validation

## Compile and Run

Compile using GCC:

```bash
gcc ArmstrongNumber.c -o ArmstrongNumber
```

Run on Linux/macOS:

```bash
./ArmstrongNumber
```

On Windows, run:

```text
ArmstrongNumber.exe
```

