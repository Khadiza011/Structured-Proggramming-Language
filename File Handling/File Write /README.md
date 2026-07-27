# File Writing Using User Input in C

This project demonstrates how to **take input from the user and write it to a text file** using file handling in C.

The program creates (or opens) a file named **`sample.txt`**, accepts data from the user, writes the data to the file, and then closes the file.

---

## Features

- Creates a text file.
- Takes input from the user.
- Writes the user input to the file.
- Checks whether the file was opened successfully.
- Closes the file properly after writing.

---

## How It Works

1. Open (or create) `sample.txt` in **write (`"w"`) mode**.
2. Check if the file is opened successfully.
3. Take input from the user.
4. Write the input to the file using `fprintf()`.
5. Close the file using `fclose()`.

---

## Example

### Input

```
Enter a number: 25
```

### sample.txt

```
25
```

If multiple inputs are taken:

### Input

```
How many numbers? 5

10
20
30
40
50
```

### sample.txt

```
10
20
30
40
50
```

---

## Functions Used

| Function | Purpose |
|----------|---------|
| `fopen()` | Creates or opens a file |
| `fprintf()` | Writes formatted data to a file |
| `scanf()` | Takes user input |
| `fclose()` | Closes the file |
| `exit()` | Terminates the program if file creation fails |

---

## Compilation

Using GCC:

```bash
gcc file_write.c -o file_write
```

Run on Linux/macOS:

```bash
./file_write
```

Run on Windows:

```bash
file_write.exe
```

---

## Time Complexity

- **Time Complexity:** O(n), where **n** is the number of user inputs.
- **Space Complexity:** O(1)

---

## Technologies Used

- C Programming
- File Handling (`stdio.h`)
- Standard Library (`stdlib.h`)

---

## Author

**Khadiza Rehan**

