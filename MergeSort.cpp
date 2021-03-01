#include <iostream>
using namespace std;

const int number = 8;
int sorted[8];


void merge(int data[], int m, int middle, int n ){

	int i = m;
	int j = middle + 1;
	int k = m;

	while (i <= middle && j <= n) {

		if (data[i] <= data[j]) {
			sorted[k] = data[i];
			i++;
		}
		else {
			sorted[k] = data[j];
			j++;
		}
		k++;
	}


	if (i > middle) {

		for (int t = j; t <=n; t++) {
			sorted[k] = data[t];
			k++;
		}

	}

	else {

		for (int t = i; t <= middle; t++) {
			sorted[k] = data[t];
			k++;
		}

	}

	for (int t = m; t <= n; t++) {
		data[t] = sorted[t];
	}




}


void mergeSort(int  a[], int m, int n) {

	if (m < n) {
		int middle = (m + n) / 2;
		
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		merge(a, m,middle, n);
		
	}


}

int main() {

	int array[number] = { 7,6,5,8,3,5,9,1 };
	mergeSort(array, 0, number - 1);

	for (int i = 0; i < number; i++) {
		cout << array[i] << " ";
	}

	cout << endl;

	return 0;

}
