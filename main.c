#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char player[256];
    char player2[256];

    printf("Player 1, Sua vez...");
    scanf("%s", player);
    toLowerCase(player);

    printf("\nPlayer 2, Sua vez...");
    scanf("%s", player2);
    toLowerCase(player2);

    printf("\nAguarde, estamos calculando o resultado...\n");

    if (strcmp(player, "papel") == 0 || strcmp(player, "pedra") == 0 || strcmp(player, "tesoura") == 0) {

        if (strcmp(player2, "papel") == 0 || strcmp(player2, "pedra") == 0 || strcmp(player2, "tesoura") == 0) {

            if (strcmp(player, "papel") == 0) {
                if (strcmp(player2, "papel") == 0) {
                    printf("Empate!");
                } else if (strcmp(player2, "pedra") == 0) {
                    printf("Player 1 ganhou, papel embrulha pedra!");
                } else if (strcmp(player2, "tesoura") == 0) {
                    printf("Player 2 ganhou, tesoura corta papel!");
                } else {
                    printf("O Player 2 jogou uma informação inválida!\n");
                    printf("\nO Player 1 venceu!");
                }
            } else if (strcmp(player, "pedra") == 0) {
                if (strcmp(player2, "pedra") == 0) {
                    printf("Empate!");
                } else if (strcmp(player2, "papel") == 0) {
                    printf("Player 2 ganhou, papel embrulha pedra!");
                } else if (strcmp(player2, "tesoura") == 0) {
                    printf("Player 1 ganhou, pedra destrói a tesoura!");
                } else {
                    printf("O Player 2 jogou uma informação inválida!\n");
                    printf("\nO Player 1 venceu!");
                }
            } else if (strcmp(player, "tesoura") == 0) {
                if (strcmp(player2, "tesoura") == 0) {
                    printf("Empate!");
                } else if (strcmp(player2, "pedra") == 0) {
                    printf("Player 2 ganhou, pedra destrói a tesoura!");
                } else if (strcmp(player2, "papel") == 0) {
                    printf("Player 1 ganhou, tesoura corta papel!");
                } else {
                    printf("O Player 2 jogou uma informação inválida!\n");
                    printf("\nO Player 1 venceu!");
                }
            }
        } else {
            printf("O Player 2 jogou uma informação inválida!\n");
            printf("Player 1 venceu por padrão!");
        }
    } else {
        printf("O Player 1 jogou uma informação inválida!\n");
        
        if (strcmp(player2, "papel") == 0 || strcmp(player2, "pedra") == 0 || strcmp(player2, "tesoura") == 0) {
            printf("Player 2 venceu por padrão!");
        } else {
            printf("O Player 2 jogou uma informação inválida!\n");
            printf("O jogo terminou em empate!");
        }
    }

    return 0;
}