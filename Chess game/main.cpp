#include<iostream>
#include"Board.h"
using namespace std;
int main() {
	Board b;
	bool isWhiteTurn = true;
	int startRow, startColumn, endRow, endColumn;
	while (true) {
		b.print();

		cout << "Enter Start Row - Column : ";
		cin >> startRow >> startColumn;
		if (isWhiteTurn == true && b.check_isWhite(startRow, startColumn) == true) {
			cout << "Enter End Row - Column : ";
			cin >> endRow >> endColumn;
			if (b.isCheck(isWhiteTurn) == true) {
				cout << " Check!" << endl;
				system("pause");
				system("CLS");
				continue;
			}
			if (b.movePiece(startRow, startColumn, endRow, endColumn) == false) {
				cout << " Invalid Move!\n";
				system("pause");
				system("CLS");
				continue;
			}
			system("CLS");
			isWhiteTurn = false;
			continue;
		}
		else if (isWhiteTurn == true && b.check_isWhite(startRow, startColumn) == false) {
			cout << " Whites Move! \n";
			system("pause");
			system("CLS");
			continue;
		}
		if (isWhiteTurn == false && b.check_isWhite(startRow, startColumn) == false) {
			cout << "Enter End Row - Column : ";
			cin >> endRow >> endColumn;
			if (b.movePiece(startRow, startColumn, endRow, endColumn) == false) {
				cout << " Invalid Move!\n";
				system("pause");
				system("CLS");
				continue;
			}
			system("CLS");
			isWhiteTurn = true;
			continue;
		}
		else if (isWhiteTurn == false && b.check_isWhite(startRow, startColumn) == true) {
			cout << " Blacks Move! \n";
			system("pause");
			system("CLS");
			continue;

		}


	}
}

