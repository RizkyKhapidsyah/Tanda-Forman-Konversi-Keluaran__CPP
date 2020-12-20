#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
	cout << "\n\n";
	cout << "Bilangan Decimal dar 75 = ";
	cout << setiosflags(ios::dec) << 75 << endl;
	cout << "Bilangan Octal dari 10 = ";
	cout << setiosflags(ios::oct) << 10 << endl;
	cout << "Bilangan Hexadecimal dari 15 = ";
	cout << setiosflags(ios::hex) << 15;
	
	_getch();
	return 0;
}