#include <iostream>
using namespace std;

int main() {
	int cards;
	int totalSum;
	char play;
	char cardAgain;

	do { //outer most loop for game
		do { //innermost loop deciding if user wants another card



			cout << "Do you want another card(y / n) ? ";
			cin >> cardAgain;
		}while (cardAgain == 'y'||cardAgain == 'Y');


		cout << "Would you like to play again(y / n) ? ";
		cin >> play;

	}while (play== 'y' || play == 'Y');





}