# Functions

This folder contains programs demonstrating the use of functions in C.

## Topics

- Function Declaration
- Function Definition
- Function Call
- Parameter Passing
- Return Values
- Recursive Functions

## Important notes about the provided sheet

A few examples in the source sheet are internally inconsistent:

1. **Problem 19:** for input `40`, the sheet prints `Prime less than 17:` even though the listed primes are all primes less than 40. The solution prints `Prime less than 40:` because that matches the problem statement.
2. **Problems 22 and 23:** the statement says to return `-1` when the substring is not found, but the sample output shows `0`. These solutions use `0` so they match the sample output.
3. **Problems 25 and 26:** the second sample uses scalar `-1`, but the displayed matrix values are the original values multiplied by `-2`. The programs correctly multiply by the entered scalar, so input `-1` produces the mathematically correct negative of the matrix.
4. **Problems 6, 14, 15, 16, 17 and 21:** the sheet does not provide an array size. To keep the sample input format unchanged, the solutions read all values from a single input line.
