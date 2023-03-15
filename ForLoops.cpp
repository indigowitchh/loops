#include<iostream>
using namespace std;


int main() {

	// example 1: prints out 70-80 -------------------------------
	for (int i = 70; i <= 80; i++)
		cout << i << " ";
	
	cout << endl; //skips a line

	//example 2: prints out 100-300 by 20s--------------------------
	for (int j = 100; j <= 300; j += 20)
		cout << j << " ";

	cout << endl; //skips a line

	//example 3: prints out 25- -25 counting down by -5-----------
	for (int k = 25; k >= -25; k -= 5)
		cout << k << " ";
	
	cout << endl; //skips a line

	//example 4: prints out 10000-10 dividing by 5---------------
	for(int m = 10000; m > 10; m /=5)
		cout << m << " ";
}
