#include "GameRules.h"

bool GameRules::x_win(char arr[3][3]) {
	if (arr[0][0] == 'x' && arr[1][1] == 'x' && arr[2][2] == 'x')
		return true;
	else if (arr[1][0] == 'x' && arr[1][1] == 'x' && arr[1][2] == 'x')
		return true;
	else if (arr[2][0] == 'x' && arr[1][1] == 'x' && arr[0][2] == 'x')
		return true;
	else if (arr[0][0] == 'x' && arr[0][1] == 'x' && arr[0][2] == 'x')
		return true;
	else if (arr[0][1] == 'x' && arr[1][1] == 'x' && arr[2][1] == 'x')
		return true;
	else if (arr[0][2] == 'x' && arr[1][2] == 'x' && arr[2][2] == 'x')
		return true;
	else if (arr[0][0] == 'x' && arr[1][0] == 'x' && arr[2][0] == 'x')
		return true;
	else if (arr[2][0] == 'x' && arr[2][1] == 'x' && arr[2][2] == 'x')
		return true;
	else
		return false;
}

bool GameRules::o_win(char arr[3][3]) {
	if (arr[0][0] == 'o' && arr[1][1] == 'o' && arr[2][2] == 'o')
		return true;
	else if (arr[1][0] == 'o' && arr[1][1] == 'o' && arr[1][2] == 'o')
		return true;
	else if (arr[2][0] == 'o' && arr[1][1] == 'o' && arr[0][2] == 'o')
		return true;
	else if (arr[0][0] == 'o' && arr[0][1] == 'o' && arr[0][2] == 'o')
		return true;
	else if (arr[0][1] == 'o' && arr[1][1] == 'o' && arr[2][1] == 'o')
		return true;
	else if (arr[0][2] == 'o' && arr[1][2] == 'o' && arr[2][2] == 'o')
		return true;
	else if (arr[0][0] == 'o' && arr[1][0] == 'o' && arr[2][0] == 'o')
		return true;
	else if (arr[2][0] == 'o' && arr[2][1] == 'o' && arr[2][2] == 'o')
		return true;
	else
		return false;
}

bool GameRules::tie(char arr[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == '-')
				return false;
		}
	}
	return true;
}

bool GameRules::end_game(char arr[3][3]) {
	bool _x_win = x_win(arr);
	bool _o_win = o_win(arr);
	bool _tie = tie(arr);

	if (_x_win) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << "X win!" << endl;
		return true;
	}
	else if (_o_win) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << "O win!" << endl;
		return true;
	}
	else if (_tie) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << "It's a tie!" << endl;
		return true;
	}	
	else
		return false;
}