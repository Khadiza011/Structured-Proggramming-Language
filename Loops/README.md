# Loops in C

## Introduction

A loop is used to repeat a block of statements multiple times.

Loops reduce repeated code and make programs shorter and easier to manage.

---

## Topics

* `for` Loop
* `while` Loop
* `do-while` Loop
* Nested Loop
* `break` Statement
* `continue` Statement

---

## for Loop

A `for` loop is used when the number of repetitions is known.

### Structure

```c
for(initialization; condition; update)
{
    statements;
}
```

### Example

```text
Print numbers from 1 to 5:

1 2 3 4 5
```

### Uses

* Printing a sequence
* Traversing arrays
* Creating multiplication tables
* Repeating a task a fixed number of times

---

## while Loop

A `while` loop repeats statements as long as its condition remains true.

### Structure

```c
while(condition)
{
    statements;
}
```

### Example

```text
Start from 1 and continue until 5:

1 2 3 4 5
```

### Uses

* Repeating until a condition becomes false
* Taking input until a valid value is entered
* Processing an unknown number of values

---

## do-while Loop

A `do-while` loop executes its statements at least once before checking the condition.

### Structure

```c
do
{
    statements;
}
while(condition);
```

### Example

```text
The statement runs once even when the condition is false.
```

### Uses

* Menu-driven programs
* Input validation
* Programs that must run at least once

---

## Difference Between while and do-while

| while Loop                       | do-while Loop                            |
| -------------------------------- | ---------------------------------------- |
| Checks the condition first       | Executes first and checks later          |
| May not execute at all           | Executes at least once                   |
| No semicolon after the condition | Requires a semicolon after the condition |

---

## Nested Loop

A loop inside another loop is called a nested loop.

### Example

```text
Outer loop controls rows.
Inner loop controls columns.
```

### Output Example

```text
* * *
* * *
* * *
```

### Uses

* Pattern printing
* Matrix operations
* Multiplication tables
* Working with 2D arrays

---

## break Statement

The `break` statement immediately stops a loop.

### Example

```text
Numbers: 1 2 3 4 5

Stop when the number becomes 3.

Output: 1 2
```

### Uses

* Stopping a search
* Exiting a loop early
* Ending a menu option
* Prime number checking

---

## continue Statement

The `continue` statement skips the current iteration and moves to the next iteration.

### Example

```text
Numbers: 1 2 3 4 5

Skip number 3.

Output: 1 2 4 5
```

### Uses

* Skipping unwanted values
* Ignoring invalid data
* Printing only selected values

---

## Infinite Loop

An infinite loop continues forever because its condition never becomes false.

### Example

```c
while(1)
{
    statements;
}
```

An infinite loop should contain a proper stopping condition or a `break` statement.

---

## Applications of Loops

* Printing numbers
* Calculating sums
* Finding factorial
* Generating multiplication tables
* Traversing arrays
* Searching values
* Pattern printing
* Matrix operations
* Menu-driven programs
* Repeating user input

---

## Advantages of Loops

* Reduces repeated code
* Makes programs shorter
* Saves programming time
* Makes code easier to maintain
* Helps process arrays and matrices
* Allows repeated calculations

---

## Important Points

* Initialization sets the starting value.
* The condition controls how long the loop runs.
* The update changes the loop variable.
* An incorrect condition may create an infinite loop.
* Nested loops increase the number of repetitions.
* `break` stops the loop.
* `continue` skips one iteration.

---

## Topics

- for Loop
- while Loop
- do-while Loop
- Nested Loops
- Pattern Printing
- Sum & Average
- Factorial
- Fibonacci Series
- Prime Number
- GCD & LCM

## Conclusion

Loops are important control structures in C programming.

The `for` loop is suitable when the number of repetitions is known.

The `while` loop is suitable when repetition depends on a condition.

The `do-while` loop is suitable when the statements must execute at least once.
