# Check Whether a Number Is a Perfect Number

Write a C program to check whether a given positive integer is a perfect number or not.

A perfect number is a number that is equal to the sum of its positive divisors, excluding the number itself.

**Examples:**
- `6` is a perfect number because `1 + 2 + 3 = 6`.
- `28` is a perfect number because `1 + 2 + 4 + 7 + 14 = 28`.
- `12` is not a perfect number because `1 + 2 + 3 + 4 + 6 = 16`.

## Solving Approach

1. Read a positive integer from the user.
2. Initialize a variable `sum` to `0`.
3. Use a `for` loop to check all integers from `1` to `num / 2`.
4. If a number divides `num` evenly, add it to `sum`.
5. Compare `sum` with the original number.
6. If they are equal, display that the number is perfect; otherwise, display that it is not perfect.

We only need to check up to `num / 2` because no positive proper divisor of a number can be greater than half of that number.

## Algorithm

1. Start.
2. Input `num`.
3. If the input is invalid or `num` is not positive, display an error and stop.
4. Set `sum = 0`.
5. For each integer `i` from `1` to `num / 2`:
   - If `num % i == 0`, add `i` to `sum`.
6. If `sum == num`, display `Perfect number`.
7. Otherwise, display `Not a perfect number`.
8. Stop.

## Sample Input

```text
Enter a positive integer: 28
```

## Sample Output

```text
28 is a perfect number.
```

## Step-by-Step Explanation

Suppose the input is `6`.

The program checks integers from `1` to `6 / 2 = 3`.

| Divisor (`i`) | Condition (`6 % i == 0`) | Sum |
|---:|---|---:|
| 1 | True | 1 |
| 2 | True | 3 |
| 3 | True | 6 |

The final sum is `6`, which equals the original number.

Therefore, **6 is a perfect number**.

## Additional Test Cases

| Input | Expected Output |
|---:|---|
| `6` | Perfect number |
| `28` | Perfect number |
| `12` | Not a perfect number |
| `1` | Not a perfect number |
| `0` | Invalid input |

## Concepts Used

- `for` loop
- `if-else` statements
- Modulus operator (`%`)
- Accumulator variable (`sum`)
- Divisibility checking
- Input validation

## Compile and Run

Compile using GCC:

```bash
gcc PerfectNumber.c -o PerfectNumber
```

Run on Linux/macOS:

```bash
./PerfectNumber
```

On Windows, run:

```text
PerfectNumber.exe
```
