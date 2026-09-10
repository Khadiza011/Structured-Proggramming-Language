# Smart Agriculture Monitoring System

A C-based Smart Agriculture Monitoring System that analyzes daily soil temperature data collected from multiple farms. The program helps farmers understand environmental conditions by calculating average temperatures, detecting stress conditions, and identifying extreme temperature records.

This project is developed using **C Programming Language** and demonstrates the use of **2D Arrays, Loops, Conditional Statements, and Basic Data Processing**.

---

## Problem Description

The system collects soil temperature data for multiple farms over consecutive days. It processes the temperature readings and provides a detailed farm-wise analysis.

The program can:

- Store temperature data using a 2D array
- Validate temperature input
- Calculate average temperature for each farm
- Classify farm conditions
- Count heat and cold stress days
- Find highest and lowest recorded temperatures
- Calculate daily average temperatures
- Identify the hottest and coldest days

---

## Features

### 1. Temperature Data Storage
- Uses a 2D array to store temperature readings.
- Each row represents a farm.
- Each column represents a day.

Example:
# 🌱 Smart Agriculture Monitoring System

A C-based Smart Agriculture Monitoring System that analyzes daily soil temperature data collected from multiple farms. The program helps farmers understand environmental conditions by calculating average temperatures, detecting stress conditions, and identifying extreme temperature records.

This project is developed using **C Programming Language** and demonstrates the use of **2D Arrays, Loops, Conditional Statements, and Basic Data Processing**.

---

## Problem Description

The system collects soil temperature data for multiple farms over consecutive days. It processes the temperature readings and provides a detailed farm-wise analysis.

The program can:

- Store temperature data using a 2D array
- Validate temperature input
- Calculate average temperature for each farm
- Classify farm conditions
- Count heat and cold stress days
- Find highest and lowest recorded temperatures
- Calculate daily average temperatures
- Identify the hottest and coldest days

---

## Features

### 1. Temperature Data Storage
- Uses a 2D array to store temperature readings.
- Each row represents a farm.
- Each column represents a day.

Example:
# Smart Agriculture Monitoring System

A C-based Smart Agriculture Monitoring System that analyzes daily soil temperature data collected from multiple farms. The program helps farmers understand environmental conditions by calculating average temperatures, detecting stress conditions, and identifying extreme temperature records.

This project is developed using **C Programming Language** and demonstrates the use of **2D Arrays, Loops, Conditional Statements, and Basic Data Processing**.

---

## Problem Description

The system collects soil temperature data for multiple farms over consecutive days. It processes the temperature readings and provides a detailed farm-wise analysis.

The program can:

- Store temperature data using a 2D array
- Validate temperature input
- Calculate average temperature for each farm
- Classify farm conditions
- Count heat and cold stress days
- Find highest and lowest recorded temperatures
- Calculate daily average temperatures
- Identify the hottest and coldest days

---

## Features

### 1. Temperature Data Storage
- Uses a 2D array to store temperature readings.
- Each row represents a farm.
- Each column represents a day.

Example:
Farm 1 → Day 1 Day 2 Day 3 ... Day 7
Farm 2 → Day 1 Day 2 Day 3 ... Day 7

---

### 2. Input Validation

The program only accepts temperature values between: 5°C to 60°C


If an invalid temperature is entered, the user is asked to enter the value again.

Example: Input: 70

Output:
Invalid temperature! Enter between 5 and 60

---

## Farm Condition Classification

The average temperature determines the farm condition:

| Average Temperature | Condition |
|---|---|
| 30°C or above | High Heat Stress |
| 20°C - 29.9°C | Optimal |
| Below 20°C | Low Temperature Stress |

---

## Stress Day Detection

The system counts:

### Heat Stress Days
Temperature greater than: 40°C


### Cold Stress Days
Temperature less than: 10°C


---

## Analysis Performed

The program provides:

### Farm-wise Summary

For every farm:

- Average temperature
- Environmental condition
- Number of heat stress days
- Number of cold stress days


Example: Farm 1

Average Temperature: 35.00°C
Condition: High Heat Stress
Heat Stress Days: 0
Cold Stress Days: 0

---

### Extreme Temperature Records

The program identifies:

- Highest single-day temperature
- Farm where it occurred

- Lowest single-day temperature
- Farm where it occurred


Example: Highest Temperature:
42°C (Farm 4)

Lowest Temperature:
12°C (Farm 5)

---

### Daily Temperature Analysis

The system calculates:

- Average temperature of each day
- Hottest day
- Coldest day

Example: 
Day 1: 26.4°C
Day 2: 27.4°C
Day 3: 27.2°C

Hottest Day: Day 7
Coldest Day: Day 1


---

# Technologies Used

- Language: C Programming
- Compiler:
  - Code Blocks
  - GCC Compiler
  - Any standard C compiler

---

## Sample Input
5

7

32 34 33 35 36 38 37

28 29 30 31 32 33 34

18 19 20 21 22 23 24

42 41 40 39 38 37 36

12 14 13 15 16 17 18

## Sample Output
Farm-wise Summary

Farm 1

Average Temperature: 35.00°C

Condition: High Heat Stress

Heat Stress Days (>40°C): 0

Cold Stress Days (<10°C): 0


Extreme Temperature Records

Highest Single-Day Temperature:
42°C (Farm 4)

Lowest Single-Day Temperature:
12°C (Farm 5)


Overall Day Analysis

Hottest Day:
Day 7

Coldest Day:
Day 1
