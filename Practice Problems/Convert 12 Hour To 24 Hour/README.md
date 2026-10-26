# Convert 12-Hour Time to 24-Hour Time

Write a C program that takes a time in 12-hour format (including AM or PM) as input and converts it into 24-hour format.

For example:

- `07:45 PM` becomes `19:45`
- `07:45 AM` becomes `07:45`
- `12:00 AM` becomes `00:00`
- `12:00 PM` becomes `12:00`

## Solving Approach

1. Read the hour, minute, and AM/PM indicator from the user.
2. Validate that the hour is between 1 and 12 and the minute is between 0 and 59.
3. If the time is PM and the hour is not 12, add 12 to the hour.
4. If the time is AM and the hour is 12, change the hour to 0.
5. Display the converted time in `HH:MM` format using `%02d`.

## Algorithm

1. Start.
2. Input the time in 12-hour format.
3. Validate the hour, minute, and AM/PM indicator.
4. If the indicator is PM and the hour is not 12, add 12.
5. Otherwise, if the indicator is AM and the hour is 12, set the hour to 0.
6. Display the converted time in 24-hour format.
7. Stop.

## Sample Input

```text
07:45 PM
```

## Sample Output

```text
Enter time (HH:MM AM/PM): 07:45 PM
24-hour time = 19:45
```

## Additional Test Cases

| Input | Expected Output |
|---|---|
| `07:45 AM` | `07:45` |
| `12:00 AM` | `00:00` |
| `12:00 PM` | `12:00` |
| `11:59 PM` | `23:59` |

## Concepts Used

- `if-else` conditional statements
- Logical operators (`||`)
- Character arrays
- Input validation
- Formatted input using `scanf()`
- Formatted output using `%02d`

## How to Compile and Run

Compile using GCC:

```bash
gcc Convert12HourTo24Hour.c -o Convert12HourTo24Hour
```

Run on Linux/macOS:

```bash
./Convert12HourTo24Hour
```

Run on Windows:

```text
Convert12HourTo24Hour.exe
```
