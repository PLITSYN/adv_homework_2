#include <iostream>
using namespace std;

int main() {
	int b, a, count;
	cin >> a;
	bool paronim = false;
	count = 0;
	b = a;
	while (a > 0) {
		count++;
		a /= 10;
	}
	int *ptra = new int[count];
	for (int j = 0; j < count; j++) {
		ptra[j] = b % 10;
		b /= 10;
		cout << ptra[j] << endl;
	}
	for (int i = 0; i < (count / 2); i++)
	{
		if (ptra[i] == ptra[count - i - 1]) {
			paronim = true;
		}
		else {
			paronim = false;
			break;
		}
	}
	delete[] ptra;
	if (paronim == true)
		cout << "Paronim" << endl;
	else
		cout << "Not Paronim" << endl;

		system("pause");
		return 0;
}