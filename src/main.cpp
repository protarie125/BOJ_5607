#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto a = int{ 0 };
	auto b = int{ 0 };
	while (0 < (n--)) {
		int ca, cb;
		cin >> ca >> cb;

		if (ca > cb) {
			a += ca + cb;
		}
		else if (ca == cb) {
			a += ca;
			b += cb;
		}
		else {
			b += cb + ca;
		}
	}

	cout << a << ' ' << b;

	return 0;
}