#include <iostream>
using namespace std; //Bubble sort is very lowest computing Algorithm

int main() {


	int k[10] = { 1,5,8,7,6,4,3,2,9,10 };

	int temp = 0;

	for (int i = 0; i < 9; i++) {

		for (int j = 0; j < 9 - i; j++) {

			if (k[j] > k[j + 1]) {
				temp = k[j + 1];
				k[j + 1] = k[j];
				k[j] = temp;
			}

		}


	}


	for (int i = 0; i < 10; i++) {

		cout << k[i] << " ";

	}

	cout << endl;

	return 0;


}
