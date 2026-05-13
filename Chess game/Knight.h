#pragma once
#include"Piece.h"
class Knight :public Piece
{
	char name;
public:
	// Constructor to initialize knight data
	Knight(char name, bool isWhite, int row, int column) :Piece(isWhite, row, column, name) {}
	// Checks whether knight move is valid
	bool isValidMove(int endRow, int endColumn) override {
		// Knight moves in L-shape
		if ((abs(position.row - endRow) == 2 && abs(position.column - endColumn) == 1) || (abs(position.row - endRow) == 1 && abs(position.column - endColumn) == 2))
			return true;
		return false;

	}
};

