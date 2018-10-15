#include <iostream>
using namespace std;

long signed int main() {
	int f1 = 1, f2 = 1, i = 2, n;
	cin >> n;
	while (f2 < n) {
		int tmp = f2;
		f2 += f1;
		f1 = tmp;
		i++;
	}
	if (f2 == n)
		cout << i << endl;
	else
		cout << -1 << endl;
	system("pause");
	return 0;
}