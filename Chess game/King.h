#pragma once
#include"piece.h"
class King :public Piece
{
	char name;
public:
	// Constructor to initialize king
	King(char name, bool isWhite, int row, int column) :Piece(isWhite, row, column, name) {}
	// Checks valid move for king (one step in any direction)
	bool isValidMove(int endRow, int endColumn) override {
		// Horizontal move (1 step)
		if (position.row == endRow && position.column != endColumn) {
			if (abs(endColumn - position.column) == 1)
				return true;
		}
		// Vertical move (1 step)
		else if (position.row != endRow && position.column == endColumn) {
			if (abs(endRow - position.row) == 1) {
				return true;
			}
		}
		// Diagonal move (1 step)
		if (position.row != endRow && position.column != endColumn) {
			if ((abs(position.row - endRow) == 1) && abs(position.column - endColumn) == 1) {
				return true;
			}
		}
		return false;
	}
};

