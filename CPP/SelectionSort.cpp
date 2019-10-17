#include <bits/stdc++.h>

using namespace std;

void selectSort(int* v, int n) {
	int min, ct;
	for (int i = 0; i < n - 1; i++) {
		min = v[i];
		ct = i;
		for(int j = i + 1; j < n; j++) {
			if (min > v[j]) {
				min = v[j];
				ct = j;
			}
		}
		if (ct != i) {
			swap(v[i], v[ct]);
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

	selectSort(v, n);

	print(v, n);

	delete[] v;
	return 0;
}
