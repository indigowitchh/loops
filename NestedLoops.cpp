#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 8; i += 1) { //outer loop
		for (int j = 0; j < 3; j += 1) { //inner loop
			cout << "*";

		}
		cout << endl;
	}

	for (int i = 0; i < 4; i += 1) { //outer loop
		for (int j = 0; j < 9; j += 1) { //inner loop
			cout << "*";

		}
		cout << endl;
	}

	for (int i = 0; i < 4; i += 1) { //outer loop
		for (int j = 0; j < 9; j += 1) { //inner loop
			cout << i;

		}
		cout << endl; 
	}
	for (int i = 0; i < 7; i += 1) { //outer loop
		for (int j = 0; j < 3; j += 1) { //inner loop
			cout << j;

		}
		cout << endl;
	}

	cout << endl; //outside outer loop but not inner loop


}
