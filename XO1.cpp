#include <stdio.h>

int main()
{
    char array[9] = { '0', '1', '2', '3', '4', '5', '6', '7', '8' };
    int player_one = 0;
    int player_two = 1;
    int i = 1;
    int hoba = 1;
    printf("%c %c %c\n", array[0], array[1], array[2]);
    printf("%c %c %c\n", array[3], array[4], array[5]);
    printf("%c %c %c\n", array[6], array[7], array[8]);
    printf("\n");

    for (i; i <= 4; i++)
        if (i % 2 > 0) {
            printf("Write X = ");
            scanf_s("%d", &player_one);
            if (8 >= player_one <= 0) {
                printf("Write different number\n");
                i = i - hoba;
            }
            else if (array[player_one] == 'X' || array[player_one] == 'O') {
                printf("Zanyato\n");
                i = i - hoba;
            }
            else {
                if (i >= 9) {
                    printf("Game over");
                    return(0);
                }
                array[player_one] = 'X';
                printf("%c %c %c\n", array[0], array[1], array[2]);
                printf("%c %c %c\n", array[3], array[4], array[5]);
                printf("%c %c %c\n", array[6], array[7], array[8]);
                printf("\n");
            }
        }
        else {
            printf("Write O = ");
            scanf_s("%d", &player_two);
            if (8 >= player_two <= 0) {
                printf("Write different number\n");
                i = i - hoba;
            }
            else if (array[player_two] == 'X' || array[player_two] == 'O') {
                printf("Zanyato\n");
                i = i - hoba;
            }
            else {
                array[player_two] = 'O';
                printf("%c %c %c\n", array[0], array[1], array[2]);
                printf("%c %c %c\n", array[3], array[4], array[5]);
                printf("%c %c %c\n", array[6], array[7], array[8]);
                printf("\n");
            }
        }
    for (i; 4 <= i <= 9; i++)
        if (array[0] == 'X' && array[1] == 'X' && array[2] == 'X') {
            printf("Player X pobedyl!");
            return(0);
        }
        else if (array[0] == 'O' && array[1] == 'O' && array[2] == 'O') {
            printf("Player O pobedyl!");
            return(0);
        }
        else if (array[3] == 'X' && array[4] == 'X' && array[5] == 'X') {
            printf("Player X pobedyl!");
            return(0);
        }
        else if (array[3] == 'O' && array[4] == 'O' && array[5] == 'O') {
            printf("Player O pobedyl!");
            return(0);
        }
        else if (array[6] == 'X' && array[7] == 'X' && array[8] == 'X') {
            printf("Player X pobedyl!");
            return(0);
        }
        else if (array[6] == 'O' && array[7] == 'O' && array[8] == 'O') {
            printf("Player O pobedyl!");
            return(0);
        }
        else if (array[0] == 'X' && array[3] == 'X' && array[6] == 'X') {
            printf("Player X pobedyl!");
            return(0);
        }
        else if (array[0] == 'O' && array[3] == 'O' && array[6] == 'O') {
            printf("Player O pobedyl!");
            return(0);
        }
        else if (array[1] == 'X' && array[4] == 'X' && array[8] == 'X') {
            printf("Player X pobedyl!");
            return(0);
        }
        else if (array[1] == 'O' && array[4] == 'O' && array[8] == 'O') {
            printf("Player O pobedyl!");
            return(0);
        }
        else if (array[2] == 'X' && array[5] == 'X' && array[6] == 'X') {
            printf("Player X pobedyl!");
            return(0);
        }
        else if (array[2] == 'O' && array[5] == 'O' && array[6] == 'O') {
            printf("Player O pobedyl!");
            return(0);
        }
        else if (array[0] == 'X' && array[4] == 'X' && array[8] == 'X') {
            printf("Player X pobedyl!");
            return(0);
        }
        else if (array[0] == 'O' && array[4] == 'O' && array[8] == 'O') {
            printf("Player O pobedyl!");
            return(0);
        }
        else if (array[2] == 'X' && array[4] == 'X' && array[6] == 'X') {
                printf("Player X pobedyl!");
                return(0);
        }
        else if (array[2] == 'O' && array[4] == 'O' && array[6] == 'O') {
            printf("Player O pobedyl!");
            return(0);
        }
        else {
            if (i % 2 > 0) {
                printf("Write X = ");
                scanf_s("%d", &player_one);
                if (8 >= player_one <= 0) {
                    printf("Write different number\n");
                    i = i - hoba;
                }
                else if (array[player_one] == 'X' || array[player_one] == 'O') {
                    printf("Zanyato\n");
                    i = i - hoba;
                }
                else {
                    array[player_one] = 'X';
                    printf("%c %c %c\n", array[0], array[1], array[2]);
                    printf("%c %c %c\n", array[3], array[4], array[5]);
                    printf("%c %c %c\n", array[6], array[7], array[8]);
                    printf("\n");
                }
            }
            else {
                if (i >= 9) {
                    printf("Game over");
                    return(0);
                }
                printf("Write O = ");
                scanf_s("%d", &player_two);
                if (8 >= player_two <= 0) {
                    printf("Write different number\n");
                    i = i - hoba;
                }
                else if (array[player_two] == 'X' || array[player_two] == 'O') {
                    printf("Zanyato\n");
                    i = i - hoba;
                }
                else {
                    array[player_two] = 'O';
                    printf("%c %c %c\n", array[0], array[1], array[2]);
                    printf("%c %c %c\n", array[3], array[4], array[5]);
                    printf("%c %c %c\n", array[6], array[7], array[8]);
                    printf("\n");
                    }
                }
            }        

    return 0;
}