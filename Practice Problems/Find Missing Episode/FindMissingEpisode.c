#include <stdio.h>
int main(void)
{
    int n, episode, missing = 0;
    printf("Enter the total number of episodes: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid number of episodes.\\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) missing ^= i;
    printf("Enter the %d watched episode numbers:\\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        if (scanf("%d", &episode) != 1 || episode < 1 || episode > n) {
            printf("Invalid episode number.\\n");
            return 1;
        }
        missing ^= episode;
    }
    printf("Missing episode: %d\\n", missing);
    return 0;
}
