# Unique Character & Lucky Number Checker in C

This project is a simple C program that checks whether a user's name contains **unique characters** and whether the user's age is a **Lucky Number**. If the name contains only unique characters, the program also modifies the string by replacing each character with the next non-vowel character.

---

## Features

- Takes the user's **name** and **age** as input.
- Checks whether all characters in the name are unique.
- Modifies the name by replacing each character with the next non-vowel character.
- Checks whether the age is an odd prime number (Lucky Number).
- Displays the results on the console.

---

## Functions

### `hasUniqueCharacters(char *str)`
Checks whether every character in the string is unique.

- Returns `1` if all characters are unique.
- Returns `0` if duplicate characters exist.

---

### `modifyString(char str[])`
Replaces every character with the next alphabet character while skipping vowels.

For example:

- `a → b`
- `b → c`
- `c → d`
- `d → f` (skips `e`)
- `h → j` (skips `i`)

---

### `isPrime(int num)`
Checks whether a number is prime.

- Returns `1` if prime.
- Returns `0` otherwise.

---

### `isLuckyNumber(int num)`
Determines whether a number is a **Lucky Number**.

A Lucky Number must:
- Be **odd**
- Be **prime**

---

## How It Works

1. Read the user's name.
2. Read the user's age.
3. Check if the name has unique characters.
4. If unique:
   - Print **"Unique: YES"**
   - Modify the string.
   - Print the modified string.
5. Check if the age is a Lucky Number.
6. Display the result.

---

## Example 1

### Input

```
Enter name: Rafi
Enter age: 17
```

### Output

```
Unique: YES
Modified string: Scgj
Lucky Number: YES
```

---

## Example 2

### Input

```
Enter name: Anna
Enter age: 18
```

### Output

```
Unique: No
Lucky Number: No
```

---

## Compilation

Using GCC:

```bash
gcc unique_lucky.c -o unique_lucky
```

Run on Linux/macOS:

```bash
./unique_lucky
```

Run on Windows:

```bash
unique_lucky.exe
```

---

## Time Complexity

| Function | Complexity |
|----------|------------|
| `hasUniqueCharacters()` | O(n²) |
| `modifyString()` | O(n) |
| `isPrime()` | O(√n) |
| `isLuckyNumber()` | O(√n) |

Overall Time Complexity: **O(n² + √age)**

Space Complexity: **O(1)**

---

## Technologies Used

- C Programming
- String Handling
- Character Processing (`ctype.h`)
- GCC Compiler

---

## Author

**Khadiza Rehan**
