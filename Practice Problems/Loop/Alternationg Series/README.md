# Series (ii): Alternating Even-Power Series

## Problem Statement

Write a C program that reads `x` and `n` and calculates:

```text
S = 1 - x²/2! + x⁴/4! - x⁶/6! + ...
```

Only even exponents up to `n` are used. If `n` is odd, the last exponent is the largest even number below `n`. After the initial `1`, the signs follow the pattern `−, +, −, +, ...`.

## How the Program Works

1. Start with `sum = 1` and `sign = -1`.
2. Use a `for` loop to visit `i = 2, 4, 6, ...` up to `n`.
3. Use an inner loop to calculate `x^i` and `i!`. Divide them to get the current term.
4. Update the sum with `sum = sum + sign * term`, then use `sign = -sign` to switch the sign for the next term.

For `i = 2`, `sign` is `-1`, so the term is subtracted. For `i = 4`, `sign` is `+1`, so the term is added.

## Worked Example

For `x = 2` and `n = 4`:

```text
S = 1 - 2²/2! + 2⁴/4!
  = 1 - 4/2 + 16/24
  ≈ -0.3333
```

**Concepts practiced:** nested `for` loops, factorials, and alternating signs using a variable.
