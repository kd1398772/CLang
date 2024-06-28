#include <stdio.h>
#include <stdbool.h>

#define SIZE 8
#define EMPTY 0
#define BLACK 1
#define WHITE 2

int board[SIZE][SIZE];

// 方向を表すための配列
int directions[8][2] = {
    {0, 1}, {1, 0}, {0, -1}, {-1, 0},
    {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
};

// ボードを初期化する関数
void init_board() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = EMPTY;
        }
    }
    // 初期の4つの駒を配置
    board[3][3] = WHITE;
    board[3][4] = BLACK;
    board[4][3] = BLACK;
    board[4][4] = WHITE;
}

// ボードを表示する関数
void print_board() {
    printf("  a b c d e f g h\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == BLACK) {
                printf("B ");
            }
            else if (board[i][j] == WHITE) {
                printf("W ");
            }
            else {
                printf(". ");
            }
        }
        printf("\n");
    }
}

// ボード内の座標かどうかを判定する関数
bool is_in_bounds(int x, int y) {
    return x >= 0 && x < SIZE && y >= 0 && y < SIZE;
}

// 有効な手かどうかを判定する関数
bool is_valid_move(int x, int y, int player) {
    if (board[x][y] != EMPTY) return false;

    int opponent = (player == BLACK) ? WHITE : BLACK;
    for (int d = 0; d < 8; d++) {
        int dx = directions[d][0], dy = directions[d][1];
        int i = x + dx, j = y + dy;
        bool found_opponent = false;

        while (is_in_bounds(i, j) && board[i][j] == opponent) {
            found_opponent = true;
            i += dx;
            j += dy;
        }

        if (found_opponent && is_in_bounds(i, j) && board[i][j] == player) {
            return true;
        }
    }
    return false;
}

// 駒をひっくり返す関数
void make_move(int x, int y, int player) {
    board[x][y] = player;
    int opponent = (player == BLACK) ? WHITE : BLACK;

    for (int d = 0; d < 8; d++) {
        int dx = directions[d][0], dy = directions[d][1];
        int i = x + dx, j = y + dy;
        bool found_opponent = false;

        while (is_in_bounds(i, j) && board[i][j] == opponent) {
            found_opponent = true;
            i += dx;
            j += dy;
        }

        if (found_opponent && is_in_bounds(i, j) && board[i][j] == player) {
            i = x + dx;
            j = y + dy;
            while (board[i][j] == opponent) {
                board[i][j] = player;
                i += dx;
                j += dy;
            }
        }
    }
}

// プレイヤーが打てる手があるかどうかを判定する関数
bool has_valid_moves(int player) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (is_valid_move(i, j, player)) {
                return true;
            }
        }
    }
    return false;
}

// ゲームが終了したかどうかを判定する関数
bool is_game_over() {
    return !has_valid_moves(BLACK) && !has_valid_moves(WHITE);
}

// スコアを計算する関数
void calculate_score(int* black_score, int* white_score) {
    *black_score = 0;
    *white_score = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == BLACK) (*black_score)++;
            if (board[i][j] == WHITE) (*white_score)++;
        }
    }
}

// メイン関数
int main() {
    int current_player = BLACK;
    char input[3];
    init_board();

    while (!is_game_over()) {
        print_board();
        printf("Current player: %s\n", (current_player == BLACK) ? "Black (B)" : "White (W)");

        if (has_valid_moves(current_player)) {
            printf("Enter your move (e.g., d3): ");
            scanf("%s", input);
            int y = input[0] - 'a';
            int x = input[1] - '1';

            if (is_valid_move(x, y, current_player)) {
                make_move(x, y, current_player);
                current_player = (current_player == BLACK) ? WHITE : BLACK;
            }
            else {
                printf("Invalid move. Try again.\n");
            }
        }
        else {
            printf("No valid moves for %s. Skipping turn.\n", (current_player == BLACK) ? "Black (B)" : "White (W)");
            current_player = (current_player == BLACK) ? WHITE : BLACK;
        }
    }

    int black_score, white_score;
    calculate_score(&black_score, &white_score);
    printf("Game over!\n");
    printf("Black (B): %d\n", black_score);
    printf("White (W): %d\n", white_score);

    if (black_score > white_score) {
        printf("Black (B) wins!\n");
    }
    else if (white_score > black_score) {
        printf("White (W) wins!\n");
    }
    else {
        printf("It's a draw!\n");
    }

    return 0;
}
