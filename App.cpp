#include "App.h"

void App::start() {
	cout << "------------Welcome to Tic-Tac-Toe------------" << endl;
}

void App::solo() {
	string line;
	string column;

	cout << "to do" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "-" << " ";
		}
		cout << endl;
	}
	cout << "Choose a place to make your move" << endl;
	cout << "Line: ";
	cin >> line;
	cout << "Column: ";
	cin >> column;
}

void App::versus() {
	cout << "to do" << endl;
}

void App::run() {
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