# Pointer Related Problems in C

This folder contains beginner-friendly solutions for all **8 Pointer Related Problems** from the provided practice sheet.

## What these solutions focus on

- Simple C syntax for beginners
- Pointer basics: `&`, `*`, pointer traversal
- Short and useful comments
- Clean file names using problem number + topic
- Output kept close to the practice sheet

## Files

| No. | File | Topic |
|---|---|---|
| 01 | `01_add_two_numbers_pointers.c` | Add two numbers using pointers |
| 02 | `02_maximum_using_pointer.c` | Find maximum using pointers |
| 03 | `03_print_array_without_index.c` | Print array without index |
| 04 | `04_string_length_using_pointer.c` | String length using pointer |
| 05 | `05_swap_using_pointers.c` | Swap two values using pointers |
| 06 | `06_count_vowels_consonants_pointer.c` | Count vowels and consonants |
| 07 | `07_sum_array_using_pointers.c` | Sum array elements using pointers |
| 08 | `08_reverse_array_pointer.c` | Print array in reverse order |

## Important note about Problem 3

The source sheet shows:

```text
3
5 4 6 7 8
```

but then prints all five array elements. The first value appears to be intended as the array size, so the example is internally inconsistent.

This solution follows the problem logically:

```text
n
n array elements
```

Example:

```text
Input:
5
5 4 6 7 8

Output:
5 4 6 7 8
```

## Compile

```bash
gcc filename.c -o program
```

## Run

```bash
./program
```
