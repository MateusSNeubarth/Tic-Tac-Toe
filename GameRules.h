#include <iostream>
using namespace std;

class GameRules {
public:
	bool x_win(char arr[3][3]);
	bool o_win(char arr[3][3]);
	bool tie(char arr[3][3]);
	bool end_game(char arr[3][3]);
};