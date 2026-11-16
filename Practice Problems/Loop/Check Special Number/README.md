# Special Number Check in C

This program takes an integer as input and checks whether it is a **Special Number**.

## Problem Statement

A number is a **Special Number** if the sum of the factorials of its digits equals the original number.

For example, `145` is a Special Number because:

```text
145 = 1! + 4! + 5!
    = 1 + 24 + 120
    = 145
```

Here, `4!` means `1 × 2 × 3 × 4 = 24`. Also, `0! = 1`.

## How the Program Works

1. Read an integer into `num`. If it is negative, print `Not a Special Number` and stop.
2. Copy `num` into `temp` so the original number is available for the final comparison.
3. Use `temp % 10` to get the last digit. For example, `145 % 10` gives `5`.
4. Set `fact` to `1`, use a `for` loop to calculate the digit’s factorial, and add it to `sum`.
5. Use `temp / 10` to remove the last digit. For example, `145 / 10` gives `14` in integer division. Repeat until `temp` becomes `0`.
6. Compare `sum` with `num`. If they are equal, print `Special Number`; otherwise, print `Not a Special Number`.

**Why use a `do-while` loop?** It runs at least once, so an input of `0` is processed as one digit. Since `0! = 1` and `1` is not equal to `0`, the program prints `Not a Special Number`.

## Dry Run: Input `145`

| `temp` before each step | Last digit | Digit factorial | Running sum |
| ---: | ---: | ---: | ---: |
| 145 | 5 | 120 | 120 |
| 14 | 4 | 24 | 144 |
| 1 | 1 | 1 | 145 |

The final sum is `145`, which matches the original input.

## Sample Runs

**Example 1: Special Number**

```text
Enter a number: 145
Special Number
```

**Example 2: Not a Special Number**

```text
Enter a number: 123
Not a Special Number
```

**C concepts practiced:** `do-while` loops, `for` loops, `if-else`, the modulo operator (`%`), and integer division (`/`).
