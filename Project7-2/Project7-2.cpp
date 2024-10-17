#include <iostream>

using namespace std;

int main() {
	bool all_the_same(int x, int y, int z);
	bool all_different(int x, int y, int z);
	bool sorted(int x, int y, int z);

	int x, y, z;

	while (!cin.fail()) {
		cout << "Enter three numbers: ";
		cin >> x >> y >> z;

		if (cin.fail()) {
			break;
		}

		bool same = all_the_same(x, y, z);
		if (same == true) {
			cout << "Numbers are all the same. " << endl;
		}
		else { cout << "Numbers are not all the same. " << endl; }

		bool different = all_different(x, y, z);
		if (different == true) {
			cout << "Numers are all different " << endl;
		}
		else { cout << "Numbers are not all different. " << endl; }

		bool sort = sorted(x, y, z);
		if (sort == true) {
			cout << "Numers are sorted. " << endl;
		}
		else { cout << "Numbers are not sorted. " << endl; }
	}
}

bool all_the_same(int x, int y, int z) {
	if ((x == y) && (y == z) && (x == y)) {
		return true;
	}
	else return false;
}

bool all_different(int x, int y, int z) {
	if ((x != y) && (y != z) && (x != z)) {
		return true;
	}
	else return false;
}

bool sorted(int x, int y, int z) {
	if ((x < y) && (y < z) || all_the_same(x, y, z)) {
		return true;
	}
	else return false;
}