# Mersenne Prime Checker in C

This project is a simple C program that checks whether a given number is a **Mersenne Prime**.

A Mersenne Prime is a prime number that can be written in the form:

\[
M = 2^n - 1
\]

where **n** is a positive integer.

Examples of Mersenne primes:
- 3 = 2² − 1
- 7 = 2³ − 1
- 31 = 2⁵ − 1
- 127 = 2⁷ − 1

---

## Features

- Checks if a number is prime.
- Recursively checks whether a number is a power of 2.
- Determines whether the input number is a Mersenne Prime.
- Simple and beginner-friendly implementation in C.

---

## Functions

### `is_prime(int x)`
Returns `1` if the number is prime, otherwise returns `0`.

### `power_of_2(int x)`
Recursively checks whether a number is a power of 2.

### `is_mersenne(int x)`
Checks whether:
1. The number is prime.
2. `number + 1` is a power of 2.

If both conditions are true, the number is a Mersenne Prime.

---

## How It Works

For an input number **n**:

1. Check if **n** is prime.
2. Compute **n + 1**.
3. Check if **n + 1** is a power of 2.
4. If both conditions are satisfied, print **Yes**; otherwise print **No**.

---

## Example

### Input
```
Enter a number: 31
```

### Output
```
Yes
```

### Input
```
Enter a number: 17
```

### Output
```
No
```

---

## Compilation

Using GCC:

```bash
gcc mersenne.c -o mersenne
```

Run:

```bash
./mersenne
```

Windows:

```bash
mersenne.exe
```

---

## Time Complexity

| Function | Complexity |
|----------|------------|
| `is_prime()` | O(√n) |
| `power_of_2()` | O(log n) |
| `is_mersenne()` | O(√n) |

Overall Time Complexity: **O(√n)**

---

## Technologies Used

- C Programming
- GCC Compiler

---

## Author

**Khadiza Rehan**
