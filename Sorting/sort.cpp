#include<iostream>
#include <vector>


using namespace std;


int main() {
	vector <string> arr;
	int a, tmp, k;
	for (int i = 0;; i++) {
		cin >> tmp;
		if (tmp == 108)
			break;
		arr.push_back(tmp);
	}
	cout << endl;
	for (int i = 0; i < arr.size(); i++) {
		cout << "\t" << arr[i];
	}
	int iter = arr.size() / 2;
	int iter2 = (arr.size() - 1) / 2;
	int i1, i2;

	for (int j = 0; j<arr.size();j++) {

		i1 = iter;
		i2 = iter2;

		for (int i = 0; 0 < i1--; i += 2) {
			if (arr[i + 1] < arr[i]) {

				arr[i + 1] = arr[i + 1] + arr[i];
				arr[i] = arr[i + 1] - arr[i];
				arr[i + 1] = arr[i + 1] - arr[i];
			}
		}

		for (int i = 1; 0 < i2--; i += 2) {
			if (arr[i + 1] < arr[i]) {

				arr[i + 1] = arr[i + 1] + arr[i];
				arr[i] = arr[i + 1] - arr[i];
				arr[i + 1] = arr[i + 1] - arr[i];
			}
		}

	}
	cout << endl;
	for (int i = 0; i < arr.size(); i++) {
		cout << "\t" << arr[i];
	}
}
