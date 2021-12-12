#include <stdio.h>

void print_array(char* arr) {
    printf("%c|%c|%c\n", *arr, *(arr + 1), *(arr + 2));
    printf("-----\n");
    printf("%c|%c|%c\n", *(arr + 3), *(arr + 4), *(arr + 5));
    printf("-----\n");
    printf("%c|%c|%c\n", *(arr + 6), *(arr + 7), *(arr + 8));
    printf("\n");
}

#define DRAW 0
#define CONTINUE 1

int check_res(char* arr) {
    for (int k = 0; k <= 2; k++) {
        if (arr[k * 3] == arr[k * 3 + 1] && arr[k * 3] == arr[k * 3 + 2] && arr[k * 3] != ' ')
            return arr[k * 3];
        if (arr[k] == arr[k + 3] && arr[k] == arr[k + 6] && arr[k] != ' ')
            return arr[k];
    }
    if ((arr[0] == arr[4] && arr[0] == arr[8] || arr[2] == arr[4] && arr[2] == arr[6]) && arr[4] != ' ') {
            return arr[4];
    }
    for (int q = 0; q < 9; q++) {
        if (arr[q] == ' ')
            return CONTINUE;
    }
    return DRAW;
}

int main() {

    int player = 'X';
    int input;
    char array[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

    for (;;) {
        print_array(array);
        printf("Write %c = ", player);
        scanf_s("%d", &input);
        array[input] = player;
        int a = check_res(array);
        if (a == 'X' || a == 'O') {
            print_array(array);
            printf("Podedyl %c!", a);
            break;
        }
        if (a == CONTINUE) {
            if (player == 'X') {
                player = 'O';
            }
            else if (player == 'O') {
                player = 'X';
            }
        }
        if (a == DRAW) {
            print_array(array);
            printf("Game over");
            break;
        }
    }
    return 0;
}