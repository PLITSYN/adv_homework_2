#include <iostream>
using namespace std;

int main() {
	int v, t, o;
	cin >> v;
	cin >> t;
	o = (109 + (v * t % 109)) % 109;
	cout << o;
	cin.get();
	cin.get();
	return 0;
}