# Pokemon Card Price Calculator in C

This project is a simple C program that calculates the **total price of multiple Pokémon cards** based on their **HP**, **Stage**, and whether the card's name ends with the character **'X'**.

---

## Features

- Takes multiple Pokémon card details as input.
- Stores card information using a structure.
- Calculates the price of each card based on predefined rules.
- Computes and displays the total price of all cards.

---

## Card Structure

Each card contains the following information:

- **Name**
- **Stage**
- **HP (Health Points)**

```c
struct card {
    char name[60];
    int stage;
    int HP;
};
```

---

## Pricing Rules

Each card starts with a **base price of 50**.

Additional price is calculated as follows:

| Condition | Additional Price |
|-----------|-----------------:|
| Base Price | +50 |
| HP | +HP |
| Stage 1 | +30 |
| Stage 2 | +80 |
| Name ends with 'X' | +200 |

---

## How It Works

For each card:

1. Read the card name.
2. Read the stage.
3. Read the HP.
4. Start with a base price of **50**.
5. Add the HP value.
6. Add the stage bonus.
7. If the card name ends with **'X'**, add **200**.
8. Add the card's price to the total price.

Finally, the program prints the total price of all cards.

---

## Example

### Input

```
Enter the number of cards: 2

Enter the name of card 1: PikachuX
Enter the stage of card 1: 2
Enter the HP of card 1: 120

Enter the name of card 2: Charmander
Enter the stage of card 2: 1
Enter the HP of card 2: 80
```

### Calculation

**Card 1**

- Base Price = 50
- HP = +120
- Stage 2 = +80
- Ends with 'X' = +200

Price = **450**

**Card 2**

- Base Price = 50
- HP = +80
- Stage 1 = +30

Price = **160**

Total Price = **610**

### Output

```
Total price: 610
```

---

## Compilation

Using GCC:

```bash
gcc pokemon_card_price.c -o pokemon_card_price
```

Run on Linux/macOS:

```bash
./pokemon_card_price
```

Run on Windows:

```bash
pokemon_card_price.exe
```

---

## Time Complexity

| Operation | Complexity |
|----------|------------|
| Reading input | O(N) |
| Price calculation | O(N) |
| Checking last character | O(L) (L = length of card name) |

Overall Time Complexity: **O(N × L)**

Space Complexity: **O(N)**

---

## Technologies Used

- C Programming
- Structures
- String Handling (`string.h`)
- GCC Compiler

---

## Author

**Khadiza Rehan**
