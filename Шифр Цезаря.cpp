#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	cout << "Enter the encryption text in English:";
	string s; int k;
	getline(cin, s);
	cout << "Enter the shift value:";
	cin >> k;

	for (auto& c : s)

	{

		if (c >= 'a' && c <= 'z')
			c = ((c - 'a' + k) % 26) + 'a';
		else if (c >= 'A' && c <= 'Z')
			c = ((c - 'A' + k) % 26) + 'A';

	}
	cout << "Cipher,:";
	cout << s << endl;
}