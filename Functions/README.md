# Function Related Problems in C

This folder contains beginner-friendly solutions for the **27 Function Related Problems** from the provided practice sheet.

## Goals
- Simple C syntax
- Function-based solutions
- Short, useful comments
- File names start with the problem number
- Sample input/output style follows the sheet where the sheet is internally consistent

## Files

| No. | File | Topic |
|---|---|---|
| 01 | `01_custom_message.c` | Print a message using a function |
| 02 | `02_print_input_character.c` | Pass and print a character |
| 03 | `03_even_or_odd.c` | Even or odd |
| 04 | `04_positive_negative_zero.c` | Positive, negative or zero |
| 05 | `05_compare_two_numbers.c` | Compare two numbers |
| 06 | `06_sum_numbers_from_console.c` | Sum numbers from one input line |
| 07 | `07_sum_array.c` | Sum array elements |
| 08 | `08_reverse_array.c` | Reverse array output |
| 09 | `09_factorial.c` | Factorial |
| 10 | `10_power_xy.c` | x to the power y |
| 11 | `11_string_length.c` | String length |
| 12 | `12_swap_pass_by_value.c` | Swap using pass by value |
| 13 | `13_swap_pass_by_reference.c` | Swap using pointers |
| 14 | `14_print_even_array_elements.c` | Print even array elements |
| 15 | `15_minimum_array_value.c` | Minimum array value |
| 16 | `16_multiply_array_by_two.c` | Multiply array by 2 |
| 17 | `17_sort_array_ascending.c` | Ascending sort |
| 18 | `18_is_prime.c` | Prime test |
| 19 | `19_generate_primes_less_than_n.c` | Prime numbers less than N |
| 20 | `20_nth_prime.c` | N-th prime |
| 21 | `21_standard_deviation.c` | Population standard deviation |
| 22 | `22_find_substring.c` | Find substring |
| 23 | `23_find_substring_custom_length.c` | Find substring without `strlen()` |
| 24 | `24_gcd_lcm_continuous.c` | GCD and LCM repeatedly |
| 25 | `25_matrix_3x5_scalar_multiply.c` | 3x5 matrix scalar multiplication |
| 26 | `26_matrix_mxn_scalar_multiply.c` | MxN matrix scalar multiplication |
| 27 | `27_convert_number_base.c` | Convert decimal to base 2–16 |

## Important notes about the provided sheet

A few examples in the source sheet are internally inconsistent:

1. **Problem 19:** for input `40`, the sheet prints `Prime less than 17:` even though the listed primes are all primes less than 40. The solution prints `Prime less than 40:` because that matches the problem statement.
2. **Problems 22 and 23:** the statement says to return `-1` when the substring is not found, but the sample output shows `0`. These solutions use `0` so they match the sample output.
3. **Problems 25 and 26:** the second sample uses scalar `-1`, but the displayed matrix values are the original values multiplied by `-2`. The programs correctly multiply by the entered scalar, so input `-1` produces the mathematically correct negative of the matrix.
4. **Problems 6, 14, 15, 16, 17 and 21:** the sheet does not provide an array size. To keep the sample input format unchanged, the solutions read all values from a single input line.

## Compile

Most files:

```bash
gcc filename.c -o program
```

Problem 21 uses `sqrt()`:

```bash
gcc 21_standard_deviation.c -o program -lm
```

## Run

```bash
./program
```
