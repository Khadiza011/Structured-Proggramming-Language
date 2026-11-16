#include <stdio.h>
#include <string.h>

struct card {
    char name[60];
    int stage;
    int HP;
};

int ends_with(char *input, char letter) {
    int len = strlen(input);
    return len > 0 && input[len - 1] == letter;
}

int main() {
    int N;
    printf("Enter the number of cards: ");
    scanf("%d", &N);

    struct card cards[N];
    int total_price = 0;

    for (int i = 1; i <= N; i++) {
        printf("Enter the name of card %d: ", i );
        scanf("%s", cards[i].name);
        printf("Enter the stage of card %d: ", i );
        scanf("%d", &cards[i].stage);
        printf("Enter the HP of card %d: ", i );
        scanf("%d", &cards[i].HP);

        int price = 50;
        price += cards[i].HP;

        if (cards[i].stage == 1) {
            price += 30;
        } else if (cards[i].stage == 2) {
            price += 80;
        }

        if (ends_with(cards[i].name, 'X')) {
            price += 200;
        }

        total_price += price;
    }

    printf("Total price: %d\n", total_price);

    return 0;
}
