# Series (iii): Sum of the First n Power-Factorial Terms

## Problem Statement

Write a C program that reads `x` and a positive integer `n` and calculates:

```text
S = x + x²/2! + x³/3! + x⁴/4! + ... + xⁿ/n!
```

This series starts with `x`, not `1`. It uses every exponent from `1` to `n`, so `n` is also the number of terms.

## How the Program Works

1. Start with `sum = 0` because there is no constant term to add.
2. Use a `for` loop to visit each exponent from `1` to `n`.
3. For each exponent `i`, use an inner loop to calculate `x^i` and `i!`.
4. Divide the power by the factorial and add the term to `sum`. When `i = 1`, the term is `x¹/1! = x`.

## Worked Example

For `x = 2` and `n = 4`:

```text
S = 2 + 2²/2! + 2³/3! + 2⁴/4!
  = 2 + 4/2 + 8/6 + 16/24
  = 6.0000
```

**Concepts practiced:** nested `for` loops, factorials, and keeping a running sum.
