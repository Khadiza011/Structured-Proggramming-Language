# File Reading in C

This project demonstrates how to **read integers from a text file** using file handling in C.

The program opens a file named **`demo.text`** in **read mode**, reads all integers stored in the file, displays them on the console, and handles possible file or input errors.

---

## Features

- Opens a text file in **read mode**.
- Reads integers using `fscanf()`.
- Displays each number on the console.
- Detects if the file cannot be opened.
- Checks whether the file contains any valid integers.
- Closes the file properly after reading.

---

## How It Works

1. Open `demo.text` in **read (`"r"`) mode**.
2. Check if the file was opened successfully.
3. Read integers one by one using `fscanf()`.
4. Print each integer to the console.
5. Count how many integers were read.
6. If no integers are found, display an appropriate message.
7. Close the file using `fclose()`.

---

## Example

### demo.text

```
10
20
30
40
50
```

### Output

```
The number from the file is: 10
The number from the file is: 20
The number from the file is: 30
The number from the file is: 40
The number from the file is: 50
```

### If the file contains no integers

```
No valid integers found in the file.
```

---

## Functions Used

| Function | Purpose |
|----------|---------|
| `fopen()` | Opens a file |
| `fscanf()` | Reads formatted data from a file |
| `printf()` | Displays output on the console |
| `perror()` | Prints file-related error messages |
| `fclose()` | Closes the file |

---

## Compilation

Using GCC:

```bash
gcc file_read.c -o file_read
```

Run on Linux/macOS:

```bash
./file_read
```

Run on Windows:

```bash
file_read.exe
```

---

## Time Complexity

- **Time Complexity:** O(n), where **n** is the number of integers in the file.
- **Space Complexity:** O(1)

---

## Technologies Used

- C Programming
- File Handling (`stdio.h`)
- Standard Library (`stdlib.h`)

---

## Author

**Khadiza Rehan**
