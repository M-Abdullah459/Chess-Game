# C++ Console-Based Chess Game

A fully functional, object-oriented Chess game designed for the Windows console. This project implements the standard rules of Chess using fundamental C++ concepts like inheritance, polymorphism, and dynamic memory management.

## ♟️ Features
- **Full Chess Set:** Implementation of all pieces: King, Queen, Rook, Bishop, Knight, and Pawn.
- **Move Validation:** Each piece has unique movement logic (diagonal for Bishops, L-shape for Knights, etc.).
- **Collision Detection:** The board checks if the path is clear before allowing a move (except for Knights).
- **Check & Checkmate:** Logic to detect when a King is under threat and when no legal moves remain.
- **Undo Logic:** Automatically prevents a player from making a move that puts their own King in check.
- **Color-Coded UI:** Utilizes `windows.h` to provide a distinct, readable board layout in the terminal.

## 🛠️ Technical Implementation
### Core OOP Concepts
- **Inheritance:** A base `Piece` class provides common attributes (position, color, name), while specific piece classes (e.g., `Queen`) inherit and extend this functionality.
- **Polymorphism:** The `isValidMove` function is declared as `virtual` in the base class and overridden in each derived class, allowing the `Board` to handle any piece pointer uniformly.
- **Encapsulation:** Board state and piece positions are managed within classes to protect data integrity.
- **Memory Management:** Efficient use of a 2D array of pointers (`Piece* board[8][8]`) with proper destructor cleanup.

## 📂 File Structure
- `Main.cpp`: Contains the game loop and user input handling.
- `Board.h/cpp`: Manages the 8x8 grid and enforces high-level game rules.
- `Piece.h/cpp`: The abstract base class for all chess pieces.
- `[PieceName].h`: Individual header files for `King`, `Queen`, `Rook`, `Bishop`, `Knight`, and `Pawn`.

## 🎮 How to Play
1. **Compile:** Use any C++ compiler (e.g., g++, Visual Studio).
2. **Input:** Enter moves using row and column indices (0-7).
   - *Example:* To move a piece from (1, 0) to (3, 0), enter the start coordinates and then the end coordinates when prompted.
3. **Turns:** The game alternates between White and Black. Illegal moves or moves resulting in a "Self-Check" will be rejected.

