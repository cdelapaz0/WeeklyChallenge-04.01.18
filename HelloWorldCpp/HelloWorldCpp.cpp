#include <iostream>
#include <conio.h>
using namespace std;

void pause()
{
	cout << "Press any key to continue..." << endl;
	_getch();
}

int main()
{
	cout << "Hello World" << endl;

	pause();
	return 0;
}
