#include <iostream>
#include <Windows.h>
using namespace std;
bool winx = false;
bool wino = false;
bool gameover = false;
int game_progress = 0;
char x = 'X';
char o = 'O';
bool logic_executed = false;
//"b" is an abbreviation of "board"
int x1, x2;
int o1, o2;
char b[3][3];
int three_checkerx() {
	//3 checker for x
	if (b[0][0] == 'X' && b[0][1] == 'X' && b[0][2] == 'X') {
		bool winx = true;
		cout << "Player X won!" << endl;
		system("pause");
	}
	if (b[1][0] == 'X' && b[1][1] == 'X' && b[1][2] == 'X') {
		bool winx = true;
		cout << "Player X won!" << endl;
		system("pause");
	}
	if (b[2][0] == 'X' && b[2][1] == 'X' && b[2][2] == 'X') {
		bool winx = true;
		cout << "Player X won!" << endl;
		system("pause");
	}
	if (b[0][0] == 'X' && b[1][0] == 'X' && b[2][0] == 'X') {
		bool winx = true;
		cout << "Player X won!" << endl;
		system("pause");
	}
	if (b[0][1] == 'X' && b[1][1] == 'X' && b[2][1] == 'X') {
		bool winx = true;
		cout << "Player X won!" << endl;
		system("pause");
	}
	if (b[0][2] == 'X' && b[1][2] == 'X' && b[2][2] == 'X') {
		bool winx = true;
		cout << "Player X won!" << endl;
		system("pause");
	}
	if (b[0][0] == 'X' && b[1][1] == 'X' && b[2][2] == 'X') {
		bool winx = true;
		cout << "Player X won!" << endl;
		system("pause");
	}
	if (b[0][2] == 'X' && b[1][1] == 'X' && b[2][0] == 'X') {
		bool winx = true;
		cout << "Player X won!" << endl;
		system("pause");
	}
	return 0;
}
int three_checkero() {
	//3 checker for x
	if (b[0][0] == 'O' && b[0][1] == 'O' && b[0][2] == 'O') {
		bool winx = true;
		cout << "Player O won!" << endl;
		system("pause");
	}
	if (b[1][0] == 'O' && b[1][1] == 'O' && b[1][2] == 'O') {
		bool winx = true;
		cout << "Player O won!" << endl;
		system("pause");
	}
	if (b[2][0] == 'O' && b[2][1] == 'O' && b[2][2] == 'O') {
		bool winx = true;
		cout << "Player O won!" << endl;
		system("pause");
	}
	if (b[0][0] == 'O' && b[1][0] == 'O' && b[2][0] == x) {
		bool winx = true;
		cout << "Player O won!" << endl;
		system("pause");
	}
	if (b[0][1] == 'O' && b[1][1] == 'O' && b[2][1] == 'O') {
		bool winx = true;
		cout << "Player O won!" << endl;
		system("pause");
	}
	if (b[0][2] == 'O' && b[1][2] == 'O' && b[2][2] == 'O') {
		bool winx = true;
		cout << "Player O won!" << endl;
		system("pause");
	}
	if (b[0][0] == 'O' && b[1][1] == 'O' && b[2][2] == 'O') {
		bool winx = true;
		cout << "Player O won!" << endl;
		system("pause");
	}
	if (b[0][2] == 'O' && b[1][1] == 'O' && b[2][0] == 'O') {
		bool winx = true;
		cout << "Player O won!" << endl;
		system("pause");
	}
	return 0;
}
void inputx(){
	again:
	cout << "Player X" << endl;
	cout << "Row (Y): ";
	cin >> x1;
	cout << "Column (X): ";
	cin >> x2;
	if (b[x1 - 1][x2 - 1] != 'X' && b[x1 - 1][x2 - 1] != 'O') {
		b[x1 - 1][x2 - 1] = 'X';
	}
	else {
		cout << "Already occupied, pick another." << endl;
		goto again;
	}
}
/*void inputo() {
	again:
	cout << "Player O" << endl;
	cout << "Row: ";
	cin >> o1;
	if (o1 > 3) { cout << "out of bounds"; }
	cout << "Column: ";
	cin >> o2;
	if (b[o1 - 1][o2 - 1] != 'X' && b[o1 - 1][o2 - 1] != 'O') {
		b[o1 - 1][o2 - 1] = 'O';
	}
	else {
		cout << "Already occupied, pick another." << endl;
		goto again;
	}
}
*/
void logic() {
	if (b[0][0] == 'X' && b[1][0] == 'X') {
		b[2][0] = 'O';
		  logic_executed = true;
	}
	if (b[0][1] == 'X' && b[1][1] == 'X') {
		b[2][1] = 'O';
		  logic_executed = true;
	}
	if (b[0][2] == 'X' && b[1][2] == 'X') {
		b[2][2] = 'O';
		  logic_executed = true;
	}
	// done
	if (b[2][0] == 'X' && b[1][0] == 'X') {
		b[0][0] = 'O';
		  logic_executed = true;
	}
	if (b[2][1] == 'X' && b[1][1] == 'X') {
		b[0][1] = 'O';
		  logic_executed = true;
	}
	if (b[2][2] == 'X' && b[1][2] == 'X') {
		b[0][2] = 'O';
		  logic_executed = true;
	}
	// done
	if (b[0][0] == 'X' && b[0][1] == 'X') {
		b[0][2] = 'O';
		  logic_executed = true;
	}
	if (b[1][0] == 'X' && b[1][1] == 'X') {
		b[2][1] = 'O';
		  logic_executed = true;
	}
	if (b[2][0] == 'X' && b[2][1] == 'X') {
		b[2][2] = 'O';
		  logic_executed = true;
	}
	// done
	if (b[0][1] == 'X' && b[0][2] == 'X') {
		b[0][0] = 'O';
		  logic_executed = true;
	}
	if (b[1][1] == 'X' && b[1][2] == 'X') {
		b[1][0] = 'O';
		  logic_executed = true;
	}
	if (b[2][1] == 'X' && b[2][2] == 'X') {
		b[2][0] = 'O';
		  logic_executed = true;
	}
	// done
	if (b[0][0] == 'X' && b[0][2] == 'X') {
		b[0][1] = 'O';
		  logic_executed = true;
	}
	if (b[1][0] == 'X' && b[1][2] == 'X') {
		b[1][1] = 'O';
		  logic_executed = true;
	}
	if (b[2][0] == 'X' && b[2][2] == 'X') {
		b[2][1] = 'O';
		  logic_executed = true;
	}
	// done
	if (b[0][0] == 'X' && b[2][0] == 'X') {
		b[1][0] = 'O';
		  logic_executed = true;
	}
	if (b[0][1] == 'X' && b[2][1] == 'X') {
		b[1][1] = 'O';
		  logic_executed = true;
	}
	if (b[0][2] == 'X' && b[2][2] == 'X') {
		b[1][2] = 'O';
		  logic_executed = true;
	}
	// done
	if (b[2][0] == 'X' && b[0][2] == 'X') {
		b[1][1] = 'O';
		  logic_executed = true;
	}
	if (b[0][0] == 'X' && b[2][2] == 'X') {
		b[1][1] = 'O';
		  logic_executed = true;
	}
	// done 
	if (b[1][1] == 'X' && b[2][2] == 'X') {
		b[0][0] = 'O';
		  logic_executed = true;
	}
	if (b[0][0] == 'X' && b[1][1] == 'X') {
		b[2][2] = 'O';
		  logic_executed = true;
	}
	if (b[0][2] == 'X' && b[1][1] == 'X') {
		b[0][2] = 'O';
		  logic_executed = true;
	}
	if (b[2][0] == 'X' && b[1][1] == 'X') {
		b[0][2] = 'O';
		  logic_executed = true;
	}
	// done

}
void inputo() {
	cout << "Bot input:";
	randy:
	srand(time(NULL));
	int randy = rand() % 3;
	logic_executed = false;
	logic();
	if (!logic_executed) {
		if (b[randy][0] != 'X' or b[randy][1] != 'X' or b[randy][2] != 'X') {
		randx:
			srand(time(NULL));
			int randx = rand() % 3;
			if (b[randy][randx] != 'X') {
				b[randy][randx] = 'O';
			}
			else {
				goto randx;
			}
		}
		else {
			goto randy;
		}

	}
}
void draw() {
	system("cls");
	cout << "     1   2   3  " << endl;
	cout << "   -------------" << endl;
	cout << " 1 | "; cout << b[0][0]; cout << " | "; cout << b[0][1]; cout << " | "; cout << b[0][2]; cout << " |" << endl;
	cout << "   -------------" << endl;
	cout << " 2 | "; cout << b[1][0]; cout << " | "; cout << b[1][1]; cout << " | "; cout << b[1][2]; cout << " |" << endl;
	cout << "   -------------" << endl;
	cout << " 3 | "; cout << b[2][0]; cout << " | "; cout << b[2][1]; cout << " | "; cout << b[2][2]; cout << " |" << endl;
	cout << "   -------------" << endl;
}
void init() {
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			b[r][c] = ' ';
		}
	}
	game_progress = 0;
}
int main() {
	init();
	while (true) {
		if (game_progress <= 9) {
			draw();
			inputx();
			game_progress++;
			draw();
			three_checkerx();
			inputo();
			game_progress++;
			draw();
			three_checkero();
		}
		else if (!winx && !wino) {
			cout << " Game draw!";
			system("pause");
		}
	}
}

