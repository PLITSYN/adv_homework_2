#include <iostream>
using namespace std;

int main() {
	int h, a, b, k;
	cin >> h >> a >> b;
	k = (h - a) / (a - b) + 1;
	cout << k;
	cin.get();
	cin.get();
	return 0;
}