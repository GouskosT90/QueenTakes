/**********************************************
* Program: queenTakes.C                       *
* Author:  ENTER YOUR NAME                    *
* Date:                               *
*                                             *
* Abstract: Lab 3  Part 2                     *
**********************************************/
#include <iostream>

using namespace std;

void queenTakes(char chessboard[][8], int i, int j){
  // pre:   chessboard has been initialized to spaces, i and j are between 0 and 7
  // post:  a 'Q' is placed where the queen is and *'s are placed on all of the
  //          positions that she can take
  // purpose: to give you more practice with arrays!

  // YOU ARE TO CODE THIS FUNCTION - do not change any other part of the program

		if ( i > 8 || j > 8) // checks the Input
	{
		cout << " Error. Please enter a number between 0 - 7" << endl;
		cin >> (i, j);
	}

	for ( int column = 0; column < 8; column ++) //fill column queen is in with Asteriks
	{
		chessboard[column][j] = '*';
	}

	for ( int k = 0; k < 8; k ++) // fill row queen is in with Asteriks
	{
		chessboard[i][k] = '*';
	}
	for ( int g = i, h = j; g >= 0 && h < 8; h++, g--) //fill upper right diagonal
	{
		chessboard[g][h] = '*';
	}
	for (int g = i, h = j; g >= 0 && h >= 0; h--, g--) // fill upper left diagonal
	{
		chessboard[g][h] = '*';
	}
	for (int g = i, h = j; g < 8 && h < 8; h++, g++) // fill lower right diagonal
	{
		chessboard[g][h] = '*';

	}
	for (int g = i, h = j; g < 8 && h >= 0; h--, g++) // fill lower left diagonal
	{
		chessboard[g][h] = '*';
	}
	chessboard[i][j] = 'Q'; // place Queen Down
	//cout << chessboard[i][j];
}
int main() {
  char chessboard[8][8];	// array to model the chessboard
  int row, column;		// indexes to tell where the queen is
  int i, j;			// indexes to work with

  for (i = 0; i < 8; i++)	// clear chessboard making it all spaces
    for (j = 0; j < 8; j++)
      chessboard[i][j] = ' ';

  // Get the location of the queen from the user
  cout << "Enter the row and column (0 - 7) to indicate the location of the queen." << endl;
  cin >> i >> j;

  // Validate the input that the user entered - integers between 0 and 7 only
  while (cin.fail() || cin.peek() != '\n' ||
	 !(i >= 0 && i <= 7) || !(j >= 0 && j <= 7)){
    cout << "That was an invalid response.  Please enter the row and column again." << endl;
    cin.clear();             // clear the flags (e.g. fail)
    cin.ignore(80, '\n');    // clar the buffer
    cin >> i >> j;           // get the user's input again
  }                   // stay in the while loop until the user enters valid input

  queenTakes(chessboard, i, j);	// call function to mark queen and *'s

  cout << endl;
  for (i = 0; i < 8; i++){	// display the chessboard
    for (j = 0; j < 8; j++){
      cout << chessboard[i][j]; // print what's in row i, column j
    }
    cout << endl;               // go to a newline after each row
  }
  cout << endl;
  return 0;
}
