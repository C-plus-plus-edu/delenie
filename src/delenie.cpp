#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> fin = {};

	if (n > 0) {
		for (int i = n; i > 0; i = i / 2)
			fin.push_back(i % 2);
		for (int z = fin.size() - 1; z >= 0; --z)
			cout << fin[z];
	} else if (n == 0)
		cout << 0;
	return 0;
}
