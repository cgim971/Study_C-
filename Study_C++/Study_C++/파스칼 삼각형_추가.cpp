#include<iostream>	
using namespace std;

int arr[10001] = { 1, 0 };

int  main() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			int index = i * 10 + j;
			arr[index] = arr[index - 10] + arr[index - 11];
			cout << arr[index] << "\t";
		}
		cout << endl;
	}

	return 0;
}