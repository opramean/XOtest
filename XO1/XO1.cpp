#include <stdio.h>

int main()
 {
    char array [9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
    int player_one = 0;
    int player_two = 1;
    printf(array);
    printf("\n");

    for (int i = 1; i <= 9; i++)
        if (i % 2 > 0) {
            printf("Write X = ");
            scanf_s("%d", &player_one);
            array[player_one] = 'X';
            printf(array);
            printf("\n");
        }
        else {
            printf("Write O = ");
            scanf_s("%d", &player_two);
            array[player_two] = 'O';
            printf(array);
            printf("\n");
            }

    return 0;
}