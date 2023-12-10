#include <iostream>
#include <string>
#include <exception>

using namespace std;

int get_size(string word, int forbidden_length) {
	int word_length = word.length();

	if (word.length() >= forbidden_length) {
		throw length_error("bad_length");
	}
	return word_length;
}

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");
	int forbidden_length;
	cout << "Введите запретную длину: ";
	cin >> forbidden_length;

	while (true)
	{
		string word;
		cout << "Введите слово: ";
		cin >> word;
		try
		{
			std::cout << "Длина слова \"" << word << "\" равна " << get_size(word, forbidden_length) << endl;
		}
		catch (length_error& e)
		{
			cout << e.what() << endl;
			return 0;
		}
		
	}
	return 0;

}