#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	
	for (int i = 2; i < num; ++i) {
	if (i == 2 || i == 3 || i == 5 || i == 7) 
	cout << i << endl;

	else if (i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0) 
	cout << i << endl;
}
}