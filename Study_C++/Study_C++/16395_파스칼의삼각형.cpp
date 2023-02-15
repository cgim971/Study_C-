#include<iostream>	
using namespace std;

int arr[31][31] = { 1, 0 };

int  main() {
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}	

	cout << arr[n][k];
	return 0;
}