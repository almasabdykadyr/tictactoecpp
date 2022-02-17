#include<iostream>
#include<vector>

using namespace std;

void pretty_print(vector<vector<char>> &game_field) {
    cout << "============\n";

    for (int i = 0; i < game_field.size(); i++) {
        for (int j = 0; j < game_field.size(); j++) {
            cout << game_field[i][j] << ' ';
        }
        cout << "\n";
    }
    cout << "============\n";
}

int checker(vector<vector<char>> &game_field) {
    //check horizontals
    for (int i = 0; i < game_field.size(); i++) {
        if (game_field[i][0] == 'X' && game_field[i][1] == 'X' && game_field[i][2] == 'X') return 1;
        else if (game_field[i][0] == 'O' && game_field[i][1] == 'O' && game_field[i][2] == 'O') return 2;
    }

    //check verticals
    for (int i = 0; i < game_field.size(); i++) {
        if (game_field[0][i] == 'X' && game_field[1][i] == 'X' && game_field[2][i] == 'X') return 1;
        else if (game_field[0][i] == 'O' && game_field[1][i] == 'O' && game_field[2][i] == 'O') return 2;
    }

    //check diagonals
    if ((game_field[0][0] == 'X' && game_field[1][1] == 'X' && game_field[2][2] == 'X') ||
        (game_field[2][0] == 'X' && game_field[1][1] == 'X' && game_field[0][2] == 'X')) {
        return 1;
    } else if ((game_field[0][0] == 'O' && game_field[1][1] == 'O' && game_field[2][2] == 'O') ||
               (game_field[2][0] == 'O' && game_field[1][1] == 'O' && game_field[0][2] == 'O')){
        return 2;
    }

    return 0;
}

int  main() {
    vector<vector<char>> game_field = {
            {'|', '|', '|'},
            {'|', '|', '|'},
            {'|', '|', '|'}
    };


}