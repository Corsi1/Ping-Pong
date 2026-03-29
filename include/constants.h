#ifndef CONSTANTS_H
#define CONSTANTS_H

#define WIDTH 80
#define HEIGHT 35

// Paddle properties
#define PADDLE_HEIGHT 4
#define PADDLE_WIDTH  1
#define PADDLE_CHAR   '|'
#define PADDLE_SPEED  1
#define PADDLE1_X (WIDTH - 3)
#define PADDLE2_X (WIDTH + 3)
#define PADDLE_Y (HEIGHT / 2 - PADDLE_HEIGHT / 2)
#define MOD_PADDLE1_X 0
#define MOD_PADDLE1_Y 0
#define MOD_PADDLE2_X 0
#define MOD_PADDLE2_Y 0


// Ball properties
#define BALL_CHAR     'O'
#define BALL_SPEED_X 1
#define BALL_SPEED_Y 1 
#define INITIAL_BALL_X (WIDTH / 2)
#define INITIAL_BALL_Y (HEIGHT / 2) 
#define MOD_BALL_X 0
#define MOD_BALL_Y 0

// Scoring
#define SCORE_TO_WIN 10


#endif // CONSTANTS_H