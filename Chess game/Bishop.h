#pragma once
#include"Piece.h"
class Bishop :public Piece
{

public:
	// Constructor to initialize bishop position and color
	Bishop(char name, bool isWhite, int row, int column) : Piece(isWhite, row, column, name) {}
	// Checks if bishop move is valid
	bool isValidMove(int endRow, int endColumn)override {
		// Bishop moves diagonally
		if ((position.row != endRow && position.column != endColumn) && (abs(endRow - position.row) == abs(endColumn - position.column)))
			return true;
		return false;
	}
};

