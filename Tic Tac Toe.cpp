#include<iostream>
using namespace std;

int main()
{
	int  t = 0;
	int toss;
	char option;
	int win1 = 0, win2 = 0, draw = 0;
	do
	{
		cout << "************************************************************************************************************************\n\n" << endl;
		cout << "\t\t\t\t\t\t WELCOME TO TIC TAC TOE \n\n"<< endl;
		cout << "************************************************************************************************************************\n\n" << endl;


		char array1[3] = { };
		char array2[3] = { };
		char array3[3] = { };
		char player1[10];
		char player2[10];
		
		cout << "\t\t\t                              " << "1" << " | " << "2" << " | " << "3" << endl;
		cout << "\t\t\t                             -----------" << endl;
		cout << "\t\t\t                              " << "4" << " | " << "5" << " | " << "6" << endl;
		cout << "\t\t\t                             -----------" << endl;
		cout << "\t\t\t                              " << "7" << " | " << "8" << " | " << "9" << endl;
		cout << " " << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
		cout << "Enter the name of PLAYER1: ";
		cin.ignore();
		cin.getline(player1, 10);
		cout << "Enter the name of PLAYER2: ";
		cin.getline(player2, 10);

		cout << "Enter the value for toss: ";
		cin >> toss;
		if (toss % 2 == 0)
		{
			cout << "In which box you want to put : ";
		}
		else if (toss % 2 != 0)
		{
			cout << "In which box you want to put : ";
		}

		for (int i = 1; i <= 9; i++)
		{
			cout << endl;
			cout << "\t\t\t                              " << array1[0] << " | " << array1[1] << " | " << array1[2] << endl;
			cout << "\t\t\t                             -----------" << endl;
			cout << "\t\t\t                              " << array2[0] << " | " << array2[1] << " | " << array2[2] << endl;
			cout << "\t\t\t                             -----------" << endl;
			cout << "\t\t\t                              " << array3[0] << " | " << array3[1] << " | " << array3[2] << endl;
			cout << " " << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;

			if (toss % 2 != 0)
			{
				//X
				cout << "In which box you want to put[X] " << player1 << ":";
			}
			else if (toss % 2 == 0)
			{
				//O
				cout << "In which box you want to put[O] " << player2 << ":";
			}
			int l;
			cin >> l;
			if (l == 1 && array1[0] == 'O' || l == 2 && array1[1] == 'O' || l == 3 && array1[2] == 'O' || l == 4 && array2[0] == 'O' || l == 5 && array2[1] == 'O' || l == 6 && array2[2] == 'O' || l == 7 && array3[0] == 'O' || l == 8 && array3[1] == 'O' || l == 9 && array3[2] == 'O')
			{
				cout << " Already used" << endl;
				toss--;
			}
			else if (l == 1 && array1[0] == 'X' || l == 2 && array1[1] == 'X' || l == 3 && array1[2] == 'X' || l == 4 && array2[0] == 'X' || l == 5 && array2[1] == 'X' || l == 6 && array2[2] == 'X' || l == 7 && array3[0] == 'X' || l == 8 && array3[1] == 'X' || l == 9 && array3[2] == 'X')
			{
				cout << " Already used" << endl;
				toss--;
			}
			if (l == 1 && toss % 2 != 0)  // Player 01
			{
				array1[0] = 'X';
			}
			else if (l == 2 && toss % 2 != 0) {
				array1[1] = 'X';
			}
			else if (l == 3 && toss % 2 != 0) {
				array1[2] = 'X';
			}
			else if (l == 4 && toss % 2 != 0) {
				array2[0] = 'X';
			}
			else if (l == 5 && toss % 2 != 0) {
				array2[1] = 'X';
			}
			else if (l == 6 && toss % 2 != 0) {
				array2[2] = 'X';
			}
			else if (l == 7 && toss % 2 != 0) {
				array3[0] = 'X';
			}
			else if (l == 8 && toss % 2 != 0) {
				array3[1] = 'X';
			}
			else if (l == 9 && toss % 2 != 0) {
				array3[2] = 'X';
			}
			else if (l == 1 && toss % 2 == 0)   // Player 02
			{
				array1[0] = 'O';
			}
			else if (l == 2 && toss % 2 == 0) {
				array1[1] = 'O';
			}
			else if (l == 3 && toss % 2 == 0) {
				array1[2] = 'O';
			}
			else if (l == 4 && toss % 2 == 0) {

				array2[0] = 'O';
			}
			else if (l == 5 && toss % 2 == 0) {
				array2[1] = 'O';
			}
			else if (l == 6 && toss % 2 == 0) {
				array2[2] = 'O';
			}
			else if (l == 7 && toss % 2 == 0) {
				array3[0] = 'O';
			}
			else if (l == 8 && toss % 2 == 0) {
				array3[1] = 'O';
			}
			else if (l == 9 && toss % 2 == 0) {
				array3[2] = 'O';
			}
			if (toss % 2 == 0)
			{
				toss = 1;
			}
			else {
				toss = 0;
			}

			// PLAYER ONE WINNING CONDITION

			if (array1[0] == array1[1] && array1[0] == array1[2] && array1[0] == 'X' || array1[0] == array2[0] && array1[0] == array3[0] && array1[0] == 'X' || array1[1] == array2[1] && array1[1] == array3[1] && array1[1] == 'X' || array1[0] == array2[1] && array1[0] == array3[2] && array1[0] == 'X' || array3[0] == array3[1] && array3[0] == array3[2] && array3[0] == 'X' || array1[2] == array2[2] && array1[2] == array3[2] && array1[2] == 'X' || array1[2] == array2[1] && array1[2] == array3[0] && array1[2] == 'X' || array2[0] == array2[1] && array2[0] == array2[2] && array2[0] == 'X') {
				cout << "\t\t                              " << array1[0] << " | " << array1[1] << " | " << array1[2] << endl;
				cout << "\t\t                             -----------" << endl;
				cout << "\t\t                              " << array2[0] << " | " << array2[1] << " | " << array2[2] << endl;
				cout << "\t\t                             -----------" << endl;
				cout << "\t\t                              " << array3[0] << " | " << array3[1] << " | " << array3[2] << endl;
				cout << " " << endl;
				cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
				cout << player1 << " Wins" << endl;

				t = 2;
				win1++;
				break;
				//goto label;

			}
			//PLAYER TWO WINNING CONDITION
			if (array1[0] == array1[1] && array1[0] == array1[2] && array1[0] == 'O' || array1[0] == array2[0] && array1[0] == array3[0] && array1[0] == 'O' || array1[1] == array2[1] && array1[1] == array3[1] && array1[1] == 'O' || array1[0] == array2[1] && array1[0] == array3[2] && array1[0] == 'O' || array3[0] == array3[1] && array3[0] == array3[2] && array3[0] == 'O' || array1[2] == array2[2] && array1[2] == array3[2] && array1[2] == 'O' || array1[2] == array2[1] && array1[2] == array3[0] && array1[2] == 'O' || array2[0] == array2[1] && array2[0] == array2[2] && array2[0] == 'O') {
				cout << "\t\t                              " << array1[0] << " | " << array1[1] << " | " << array1[2] << endl;
				cout << "\t\t                             -----------" << endl;
				cout << "\t\t                              " << array2[0] << " | " << array2[1] << " | " << array2[2] << endl;
				cout << "\t\t                             -----------" << endl;
				cout << "\t\t                              " << array3[0] << " | " << array3[1] << " | " << array3[2] << endl;
				cout << " " << endl;
				cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
				cout << player2 << " Wins" << endl;
				t = 1;
				win2++;
				break;

			}

		}
		// DRAW  CONDITION

		if (t == 0) {

			cout << "\t\t                             " << array1[0] << " | " << array1[1] << " | " << array1[2] << endl;
			cout << "\t\t                             -----------" << endl;
			cout << "\t\t                              " << array2[0] << " | " << array2[1] << " | " << array2[2] << endl;
			cout << "\t\t                             -----------" << endl;
			cout << "\t\t                              " << array3[0] << " | " << array3[1] << " | " << array3[2] << endl;
			cout << " " << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
			cout << "DRAW\n" << endl;
			draw++;
			//break;
		}
		cout << "DO YOU WANT TO PLAY AGAIN Y/N" << endl;
		cin >> option;


	} while (option != 'N');
	cout << "Num of times player 1 WINS : " << win1 << endl;
	cout << "Num of times player 2 WINS : " << win2 << endl;
	cout << "Num of times DRAW: " << draw << endl;

	return 0;
}