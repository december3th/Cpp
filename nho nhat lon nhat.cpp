#include<iostream>
#include<string>
using namespace std;
void xuat(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
	cout <<" ";
}
void somax(int n, int s) {
	int i, j, arr[100];
	for (i = 0; i < n; i++) {
		for (j = 9; 0 <= j; j--) {
			if (s - j >= 0) {
				arr[i] = j;
				s -= j;
				break;
			}
		}
	}
	xuat(arr, n);
}
void somin(int n, int s) {
	int i, j, arr[100];
	for (i = n - 1; 1 <= i; i--) {
		for (j = 9; 0 <= j; j--) {
			if (s - j > 0) {
				arr[i] = j;
				s -= j;
				break;
			}
		}
	}
	arr[0] = s;
	xuat(arr, n);
}
int main() {
	int n, s;
	cin >> n >> s;
	if (n == 1 && s < 9) {
		cout << s << " " << s <<endl;
	}
	else if (9 * n < s || s==0) {
		cout << "-1 -1" << endl;
	}
	else {
		soMin(n, s);
		soMAX(n, s);
		cout << endl;
	}
	return 0;
}

