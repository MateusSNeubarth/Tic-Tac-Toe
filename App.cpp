#include <string>
#include "App.h"

void App::start() {
	cout << "Game Started" << endl;
}

void App::solo() {
	string line;
	string column;
	int l = -1;
	int c = -1;
	char board[3][3];
	int counter = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = '-';
		}
	}
	GameRules myGame;
	bool endGame = myGame.end_game(board);

	do {
		bool rightEntry = false;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << board[i][j] << " ";
			}
			cout << endl;
		}

		if (counter % 2 == 0) {
			// player play
			do {
				cout << "Choose a place to make your move" << endl;
				cout << "Line: ";
				cin >> line;
				cout << "Column: ";
				cin >> column;
				if ((line.compare("1") == 0 || 
					line.compare("2")  == 0|| 
					line.compare("3") == 0)  && 
					(column.compare("1") == 0 || 
					column.compare("2") == 0 || 
					column.compare("3") == 0)) {
					l = stoi(line);
					c = stoi(column);
					rightEntry = true;
				}
				else
					cout << "Invalid entry, try again" << endl;

				l--;
				c--;
				if (rightEntry == true) {
					if (board[l][c] == '-') {
						board[l][c] = 'x';
					}
				}
			} while (!rightEntry);
		}
		else {
			// ai play
			bool valid = false;
			do {
				l = rand() % 3 + 1;
				c = rand() % 3 + 1;
				if (board[l][c] == '-') {
					board[l][c] = 'o';
					valid = true;
				}
			} while (!valid);
		}

		cout << endl;
		counter++;
		endGame = myGame.end_game(board);
	} while (!endGame);

}

void App::versus() {
	cout << "to do" << endl;
}

void App::run() {
	cout << "------------Welcome to Tic-Tac-Toe------------" << endl;
	char entry;
	do {
		cout << "Choose a gamemode: " << endl;
		cout << "1 - Solo" << endl;
		cout << "2 - Versus" << endl;
		cout << "3 - Exit" << endl;
		cin >> entry;
		switch (entry) {
		case '1':
			solo();
			break;
		case '2':
			versus();
			break;
		case '3':
			break;
		default:
			cout << "Invalid entry, try again" << endl;
			break;
		}
	} while (entry != '3');
}

void App::finish() {
	cout << "Thanks for playing" << endl;
}