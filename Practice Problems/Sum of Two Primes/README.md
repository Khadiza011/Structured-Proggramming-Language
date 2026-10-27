# Check Whether a Number Can Be Expressed as the Sum of Two Primes

Write a C program to check whether a given integer can be expressed as the sum of two prime numbers.

A prime number is a positive integer greater than 1 that has exactly two factors: 1 and itself.

**Examples:**

- `10 = 3 + 7` — possible.
- `20 = 3 + 17` — possible.
- `11` — not possible as the sum of two primes.

## Solving Approach

1. Read an integer `num` from the user.
2. Check every integer `i` from `2` up to `num / 2`.
3. For each `i`, check whether both `i` and `num - i` are prime.
4. If both numbers are prime, the required sum is possible.
5. Display the prime pair and stop searching.
6. If no pair is found, display that the number cannot be expressed as the sum of two primes.

To check whether a number is prime, test whether any integer from `2` up to its square root divides it evenly.

## Algorithm

1. Start.
2. Input `num`.
3. If the input is invalid or less than 4, display that the sum of two primes is not possible.
4. For each integer `i` from `2` to `num / 2`:
   - Check whether `i` is prime.
   - Check whether `num - i` is prime.
   - If both are prime, display the pair and stop searching.
5. If no pair is found, display that the number cannot be expressed as the sum of two primes.
6. Stop.

## Sample Input

```text
Enter an integer: 10
```

## Sample Output

```text
10 = 3 + 7
```

## Step-by-Step Explanation

Consider the input `10`.

| First number (`i`) | Second number (`10 - i`) | Are both prime? |
|---:|---:|---|
| 2 | 8 | No — 8 is not prime |
| 3 | 7 | Yes |

Since both 3 and 7 are prime, the program displays:

`10 = 3 + 7`

## Additional Test Cases

| Input | Expected Result |
|---:|---|
| `4` | `4 = 2 + 2` |
| `10` | `10 = 3 + 7` |
| `20` | `20 = 3 + 17` |
| `11` | Cannot be expressed as the sum of two primes |
| `3` | Cannot be expressed as the sum of two primes |

## Concepts Used

- User-defined functions
- `for` loops
- `if` statements
- Modulus operator (`%`)
- Prime number checking
- Logical AND operator (`&&`)
- Input validation

## Compile and Run

Compile using GCC:

```bash
gcc SumOfTwoPrimes.c -o SumOfTwoPrimes
```

Run on Linux/macOS:

```bash
./SumOfTwoPrimes
```

On Windows, run:

```text
SumOfTwoPrimes.exe
```


*Part of the ICS C Programming Repository.*
