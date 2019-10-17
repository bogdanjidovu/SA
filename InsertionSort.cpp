#include <bits/stdc++.h>

using namespace std;

void insertSort(int* v, int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (v[i] < v[j]) {
				swap(v[i], v[j]);
			}
		}
	}
}

void print(int* v, int n) {
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	cout << "\n";
}

int main() {
	int n, *v;

	cout << "Give the number of elements: ";
	cin >> n;
	v = new int[n];

	cout << "Give the numbers: ";
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	insertSort(v, n);

	print(v, n);

	delete[] v;
	return 0;
}