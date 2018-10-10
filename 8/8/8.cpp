#include <iostream>
using namespace std;

int main() {
	signed int x, i, d;
	d = 0;
	cin >> x;
	while (sqrt(x*x) > 0)
		{
			i = x % 10;
			d = d * 10 + i;
			x = x / 10;
		}
	 cout << d << endl;
	system("pause");
	return 0;
}