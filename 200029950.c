#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 4
#define INITIAL_ENERGY 20
#define MOVEMENT_COST 1
#define FOOD_PROBABILITY 0.15
#define HOLE_PROBABILITY 0.1

void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]);
void printBoard(char board[BOARD_SIZE][BOARD_SIZE], int time, int energy);
void placeCharacter(char board[BOARD_SIZE][BOARD_SIZE], char character);
void moveTortoise(char board[BOARD_SIZE][BOARD_SIZE], char direction, int *energy);
void eatMulberry(char board[BOARD_SIZE][BOARD_SIZE], char direction, int *energy);
int isGameOver(char board[BOARD_SIZE][BOARD_SIZE], int energy);

int main() {
    char board[BOARD_SIZE][BOARD_SIZE];
    int energy = INITIAL_ENERGY;
    int time = 1;


    initializeBoard(board);

    printf("Welcome to the Tortoise Game.\n");
    printf("Please specify the board size: %d\n", BOARD_SIZE);

    while (!isGameOver(board, energy)) {
        printBoard(board, time, energy);

        char action, direction;
        printf("Please enter an action: ");
        scanf(" %c", &action);

        if (action == 'M' || action == 'E') {
            scanf(" %c", &direction);
        }

        if (action == 'M') {
            moveTortoise(board, direction, &energy);
        } else if (action == 'E') {
            eatMulberry(board, direction, &energy);
        }

        time++;
    }

    printf("===================================\n");
    printBoard(board, time, energy);

    if (energy <= 0) {
        printf("YOU LOST :-(\nGAME OVER!\n");
    } else {
        printf("CONGRATULATIONS, YOU WON :-)\n");
    }

    return 0;
}


void placeHole(char board[BOARD_SIZE][BOARD_SIZE]) {
    int numHoles = (int)(HOLE_PROBABILITY * BOARD_SIZE * BOARD_SIZE);

    for (int i = 0; i < numHoles; ++i) {
        int x, y;
        do {
            x = rand() % BOARD_SIZE;
            y = rand() % BOARD_SIZE;
        } while (board[x][y] != '_');

        board[x][y] = 'O'; 
    }
}

void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]) {

    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = '_';
        }
    }


    placeCharacter(board, '@');

    int numMulberries = (int)(FOOD_PROBABILITY * BOARD_SIZE * BOARD_SIZE);
    for (int i = 0; i < numMulberries; i++) {
        placeCharacter(board, '*');
    }

    
    placeHole(board);
}


void printBoard(char board[BOARD_SIZE][BOARD_SIZE], int time, int energy) {
    printf("Time = %d Energy level: %d\n", time, energy);

    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void placeCharacter(char board[BOARD_SIZE][BOARD_SIZE], char character) {
    int x, y;
    do {
        x = rand() % BOARD_SIZE;
        y = rand() % BOARD_SIZE;
    } while (board[x][y] != '_');

    board[x][y] = character;
}

void checkHole(char board[BOARD_SIZE][BOARD_SIZE], int tortoiseX, int tortoiseY, int *energy) {
    if (board[tortoiseX][tortoiseY] == 'O') {
        printf("Tortoise fell into a hole! You lost :-(\n");
        *energy = 0;
    }
}

void moveTortoise(char board[BOARD_SIZE][BOARD_SIZE], char direction, int *energy) {
    int tortoiseX, tortoiseY;


    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == '@') {
                tortoiseX = i;
                tortoiseY = j;
                break;
            }
        }
    }

    int newX = tortoiseX;
    int newY = tortoiseY;

    switch (direction) {
        case 'N':
            newX--;
            break;
        case 'S':
            newX++;
            break;
        case 'E':
            newY++;
            break;
        case 'W':
            newY--;
            break;
        default:
            return;
    }

    if (newX >= 0 && newX < BOARD_SIZE && newY >= 0 && newY < BOARD_SIZE) {
        *energy -= MOVEMENT_COST;

        checkHole(board, newX, newY, energy); 

        board[tortoiseX][tortoiseY] = '_';
        board[newX][newY] = '@';
    }
}

void eatMulberry(char board[BOARD_SIZE][BOARD_SIZE], char direction, int *energy) {
    int tortoiseX, tortoiseY;

    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == '@') {
                tortoiseX = i;
                tortoiseY = j;
                break;
            }
        }
    }

 
    int targetX = tortoiseX;
    int targetY = tortoiseY;

    switch (direction) {
        case 'N':
            targetX--;
            break;
        case 'S':
            targetX++;
            break;
        case 'E':
            targetY++;
            break;
        case 'W':
            targetY--;
            break;
        default:
          
            return;
    }

   
    if (targetX >= 0 && targetX < BOARD_SIZE && targetY >= 0 && targetY < BOARD_SIZE) {
   
        if (board[targetX][targetY] == '*') {
           
            *energy += 10;

            board[targetX][targetY] = '_';
        }
    }
}
int isGameOver(char board[BOARD_SIZE][BOARD_SIZE], int energy) {
    int tortoiseFound = 0;
    int mulberriesLeft = 0;
    int tortoiseX = -1, tortoiseY = -1; 

   
    if (energy <= 0) {
        printf("Out of energy! You lost :-(\n");
        return 1; 
    }

    
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == '@') {
                tortoiseFound = 1;
                tortoiseX = i;
                tortoiseY = j;
                break;
            }
        }
        if (tortoiseFound) {
            break;
        }
    }

 
    if (tortoiseX == -1 || tortoiseY == -1 || tortoiseX >= BOARD_SIZE || tortoiseY >= BOARD_SIZE ||
        board[tortoiseX][tortoiseY] == 'O' || board[tortoiseX][tortoiseY] == '_') {
        printf("Tortoise fell into a pit, an empty space, or went out of the board! You lost :-(\n");
        return 1; 
    }

    
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == '*') {
                mulberriesLeft = 1;
                break;
            }
        }
    }

    if (!mulberriesLeft) {
        printf("Congratulations! You won :-)\n");
        return 1;
    }

    return 0; 
}
