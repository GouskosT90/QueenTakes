/**********************************************
* Program:  twoD.C                            *
* Author:   Theodore Gouskos                  *
* Date:                                       *
*                                             *
* Abstract: Lab 3  Part 1                     *
**********************************************/
#include <iostream>
#include <iomanip>

using namespace std;

// ****************************************************************
// write function called "rowSum" that displays the total of the
//       integers in each row


// write function called "columnSum" that displays the total of the
//       integers in each column
// ****************************************************************
int rowsum(int value[12][16], int n)
	{
	int sum = 0;
		for( int i = 0; i < n; i++) // Goes through the values in the rows
		{
			for( int j = 0; j < 16; j ++) // Goes through amount of rows
			{
				sum = sum + value[i][j]; // Variable for adding all the numbers up
			}
			cout << "Row " << i << ": " << sum << endl;
			sum = 0;
		}
	}

int columnSum(int value[12][16], int n)
	{
		int sum = 0;
		for( int j = 0; j < 16; j++) // Goes through Column
		{
			for( int i = 0; i < n; i++) // Goes through the values in the rows
			{
				sum = sum + value[i][j];
			}
			cout << "Column " << j << ": " << sum << endl;
			sum = 0;
		}
	}
int main() {
  int values[12][16];                     // define the array

  // Initialize the array with values
  for (int i = 0; i < 12 ; i++){         // for each of the 12 rows
    for (int j = 0; j < 16; j ++){       // for each of the 16 columns in the ith row
      values[i][j] = ((i + j) * 25) % 17;// I made this up just to give the array #s
      cout << setw(3) << values[i][j];   // print the value - width set to 3
    }
    cout << endl;                        // go to a new line at the end of each row
  }

  // Call the two functions
		cout << endl << "Row Sums:" << endl;
		rowsum(values, 12);
		cout << endl << "Column Sums:" << endl;
		columnSum(values, 12);

  return 0;
}
