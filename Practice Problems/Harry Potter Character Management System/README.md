# SPL Project — 

## Q1. C Program

The program uses a structure named `Character` and stores information for 5 Harry Potter characters.

### Structure Members

```c
struct Character
{
    char name[100];
    int age;
    char house[50];
    int wizard_point;
};
```

- `name` stores the character's name.
- `age` stores the character's age.
- `house` stores the Hogwarts house.
- `wizard_point` stores a simple numerical representation of the character's magical performance or achievement.

## How the program works

1. The program creates an array of 5 `Character` variables.
2. A loop takes the name, age, house, and wizard point of each character from the user.
3. The age of every character is added to `totalAge`.
4. Another loop displays the information of all 5 characters.
5. The user enters a character name to search.
6. `strcmp()` compares the entered name with the stored names.
7. If the name matches, the complete information of that character is displayed.
8. The program calculates the average age using `totalAge / 5.0`.
9. `strlen()` is used to compare the lengths of the character names.
10. The program finally displays the longest and shortest character names.

## Q2. Why a structure is suitable

A structure is suitable because each character has several pieces of information of different data types. For example, a character has a name and house stored as strings, while age and wizard point are integers. A structure allows all of these related values to be kept together under one variable.

Using a structure also makes the program easier to organize. Instead of maintaining separate arrays for names, ages, houses, and wizard points, each `Character` stores all information about one character in one place.

### Why these traits match Harry Potter

The selected traits are:

- **Name** — identifies each character.
- **Age** — represents the character's age.
- **House** — is highly relevant to Harry Potter because Hogwarts students are associated with houses such as Gryffindor, Slytherin, Ravenclaw, and Hufflepuff.
- **Wizard Point** — represents a numerical score for magical performance or achievement, making it possible to compare characters numerically.

These traits are appropriate for a Harry Potter-based character management program because they combine basic personal information with fiction-specific information.
