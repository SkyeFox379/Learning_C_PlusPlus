#include <iostream>

using namespace std;

void leftMove (int board[4][4]) {
    int j, k, i;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 4 - 1; k++) {
                if (board[j][k] == 0) {
                    board[j][k] = board[j][k+1];
                    board[j][k+1] = 0;
                }
                if (board[j][k] == board[j][k+1]) {
                    board[j][k] = board[j][k] * 2;
                    board[j][k+1] = 0;
                }
            }
        }
    }
    for (j = 0; j < 4; j++) {
        for (k = 0; k < 4; k++)
            cout << board[j][k] << " ";
        cout << endl;
    }

}

void rightMove (int board[4][4]) {
    int j, k, i;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 4; k++) {

            }
        }
    }
    for (j = 0; j < 4; j++) {
        for (k = 0; k < 4; k++)
            cout << board[j][k] << " ";
        cout << endl;
    }
}

void upMove (int board[4][4]) {
    int j, k, i;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 4; k++) {

            }
        }
    }
    for (j = 0; j < 4; j++) {
        for (k = 0; k < 4; k++)
            cout << board[j][k] << " ";
        cout << endl;
    }
}

void downMove (int board[4][4]) {
    int j, k, i;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 4; k++) {

            }
        }
    }
    for (j = 0; j < 4; j++) {
        for (k = 0; k < 4; k++)
            cout << board[j][k] << " ";
        cout << endl;
    }
}

int main()
{
    int grid[4][4];
    int j, k, playerAction;

    for (j = 0; j < 4; j++) {
        for (k = 0; k < 4; k++) {
            cin >> grid[j][k];
            //cout << grid[j][k] << " ";
        }
        //cout << endl;
    }

    cin >> playerAction;

    if (playerAction == 0) 
        leftMove(grid);

    // else if (playerAction = 1) {
        //upMove(grid);
    // }

    // else if (playerAction = 2) {
        //rightMove(grid);
    // }

    // else if (playerAction = 3) {
        //downMove(grid);
    // }

    return 0;
}