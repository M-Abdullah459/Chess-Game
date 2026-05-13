#pragma once
#include"Piece.h"
// Queen class derived from Piece
class Queen :public Piece
{
	char name;
public:
	// Constructor to initialize queen data
	Queen(char name, bool isWhite, int row, int column) :Piece(isWhite, row, column, name) {}
	// Checks whether the move is valid for Queen
	bool isValidMove(int endRow, int endColumn) override {

		// Horizontal or vertical movement
		if ((position.row == endRow && position.column != endColumn) || (position.row != endRow && position.column == endColumn))
			return true;
		// Diagonal movement
		if ((position.row != endRow && position.column != endColumn) && (abs(position.row - endRow) == abs(position.column - endColumn)))
			return true;
		return false;

	}
};

