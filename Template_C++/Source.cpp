#include <iostream>
#include "ahalaimahalai.h"

using namespace std;

int main() {
	cout << AhalaiMahalai<1, 2, 2>::who << endl;
	cout << AhalaiMahalai<1, 2, 2>::how << endl;
	cout << AhalaiMahalai<1, 2, 2>::_xor << endl;
	cout << AhalaiMahalai<1, 2, 2>::_max << endl;
	//int a = AhalaiMahalai<1, 2, 3, 2>::_max ^ AhalaiMahalai<1, 2, 3, 2>::_xor;
	//cout << a << endl;
	int b = AhalaiMahalai<1, 2, 2>::whence;
	cout << b << endl;
	int c = AhalaiMahalai<1, 2, 2>::_num_max;
	//cout << c << endl;
	system("pause");
}