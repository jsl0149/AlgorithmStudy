#include <iostream> //�갡 ���� ���� �Ƹ���? �迭�� 100�� ���̶�� �����Ͽ�
using namespace std;

int main() {


	int k[10] = { 2,10,5,8,7,6,4,3,1,9 };

	int temp = 0;

	int j;

	for (int i = 1; i < 10; i++) {
		temp = k[i];

		
		for (j = i - 1; j >= 0 && temp < k[j]; j--) {

			k[j + 1] = k[j];

		}
		
		k[j + 1] = temp;

	}




	for (int i = 0; i < 10; i++) {

		cout << k[i] << " ";

	}

	cout << endl;

	return 0;


}