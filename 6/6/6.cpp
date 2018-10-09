#include <iostream>
using namespace std;

int main() {
	int x0, y0, x1, y1;
	cin >> x0 >> y0 >> x1 >> y1;
	if (x0 == x1 || y0 == y1) {
		cout << "YES" << endl;
	}
	else cout << "NO";
	cin.get();
	cin.get();
	return 0;
}