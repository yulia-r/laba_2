#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //возможность ввести текст на русском
	cout << "Введите текст для обработки: " << endl; //указания
	string s; int k;
	getline(cin, s);
	cout << "Введите шаг сдвига (*Примечание: при дешифровке шаг сдвига указывается отрицательным): " << endl; //указания
	cin >> k;

	for (auto& c : s)
	{
		if (c >= 'a' && c <= 'z')
			c = ((c - 'a' + k) % 26) + 'a';
		else if (c >= 'A' && c <= 'Z')
			c = ((c - 'A' + k) % 26) + 'A';
	}

	cout << s << endl;
}
