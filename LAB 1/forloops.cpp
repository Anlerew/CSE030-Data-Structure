#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence;
	int num;

	getline(cin, sentence);
	cin >> num;

	for (int i = 0; i < num; i++) {
		cout << sentence << endl;
	}

    return 0;
}