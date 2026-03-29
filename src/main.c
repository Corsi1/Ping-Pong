/*  
    TODO:
    1. Agregar tablero
    2. Agregar raquetas
    3. Agregar pelota, fisicas y renders
    4. Agregar input para el jugador
    5. Agregar IA para la raqueta contraria
    6. Agregar puntuacion
    7. Pantalla de victoria, derrota, empate y reinicio


*/

#include <stdio.h>
#include <windows.h>
#include "constants.h"

void main(){
    char board[HEIGHT][WIDTH];
    int ballX, ballY;
    int paddle1Y, paddle2Y;
    int paddle1X, paddle2X;
    int score1, score2;
    int paddle1ModX, paddle1ModY;
    int paddle2ModX, paddle2ModY;
    int ballModX, ballModY;

    // Initialize game state
    ballX = INITIAL_BALL_X;
    ballY = INITIAL_BALL_Y;
    paddle1Y = PADDLE_Y;
    paddle2Y = PADDLE_Y;
    paddle1X = PADDLE1_X;
    paddle2X = PADDLE2_X;
    score1 = 0;
    score2 = 0;
    paddle1ModX = MOD_PADDLE1_X;
    paddle1ModY = MOD_PADDLE1_Y;
    paddle2ModX = MOD_PADDLE2_X;
    paddle2ModY = MOD_PADDLE2_Y;
    ballModX = MOD_BALL_X;
    ballModY = MOD_BALL_Y;
    
    
    
}




