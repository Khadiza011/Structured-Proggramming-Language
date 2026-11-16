# Series (i): Sum of Even Powers Divided by Factorials

## Problem Statement

Write a C program that reads `x` and `n` and calculates:

```text
S = 1 + x²/2! + x⁴/4! + x⁶/6! + ...
```

Here, `n` is the upper limit for the exponent, not the number of terms. If `n` is odd, the program stops at the largest even exponent below `n`. For example, `n = 5` includes terms up to `x⁴/4!`.

## How the Program Works

1. Start with `sum = 1` because the first term is `1`.
2. Use a `for` loop to visit the even exponents `2, 4, 6, ...` up to `n`.
3. For each exponent `i`, use an inner loop to calculate `x^i` and `i!` by repeated multiplication. For example, `4! = 1 × 2 × 3 × 4 = 24`.
4. Divide the power by the factorial and add the result to `sum`.

## Worked Example

For `x = 2` and `n = 4`:

```text
S = 1 + 2²/2! + 2⁴/4!
  = 1 + 4/2 + 16/24
  ≈ 3.6667
```

**Concepts practiced:** nested `for` loops, even exponents, and factorials.
