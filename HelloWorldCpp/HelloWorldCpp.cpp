#include <iostream>

using namespace std;

void pause()
{
	cout << "Press any key to continue..." << endl;
	cin.get();
}

int main()
{
	cout << "Hello World" << endl;

	pause();
	return 0;
}
