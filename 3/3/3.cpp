#include <iostream>
using namespace std;

int main()
{
	int x;
	for (x=33; x<=255; ++x)
	{
		cout << (char)x << endl;
		
		cout << "Oktal:" << oct << x << endl;
		cout << "Hexadecimal:" << hex << x << endl;
		cout << "Decimal:" << dec << x << endl << endl;
	}
	system("pause");
}