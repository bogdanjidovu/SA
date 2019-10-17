#include <bits/stdc++.h>

using namespace std;

int partition (int* v, int low, int high) {
	int pivot, i;

	pivot = v[high];
	i = low - 1;

	for (int j = low; j <= high - 1; j++) {
		if (v[j] < pivot) {
			i++;
			swap(v[i], v[j]);
		}
	}
	swap(v[i+1], v[high]);
	int rez = i + 1;
	return rez;
}

void qSort(int* v, int low, int high) {
	if (low < high) {
		int p;
		p = partition(v, low, high);
		qSort(v, low, p - 1);
		qSort(v, p + 1, high);
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

	qSort(v, 0, n - 1);

	print(v, n);

	delete[] v;
	return 0;
}
