
#include "stdafx.h"
#include "Book.h"



void Book::is_isbn_code_valid(Book& object)
{
	string code;
	bool incorrect = true;
	char dash = '-';

	while (incorrect) {
		int i = 0;
		int error_counter = 0;
		cout << "Enter 6-symbol ISBN code (e.g. n-n-n-x, where n - character, x - integer): ";
		cin >> code;

		if (code.size() != 7) {
			cout << "Code should be 7 symbols long.\n";
			incorrect = true;
			error_counter++;
		}
		if (code.size() == 7) {
			while (i < code.size())
			{
				if (code[1] != dash || code[3] != dash || code[5] != dash)
				{
					cout << "Incorrect position of dashes\n";
					error_counter++;
					i = code.size();
				}
				if (!isalpha(code[0]) || !isalpha(code[0]) || !isalpha(code[4]))
				{
					cout << "Incorrect position of characters\n";
					error_counter++;
					i = code.size();
				}
				if (!isdigit(code[6]))
				{
					cout << "Incorrect position of the digit\n";
					error_counter++;
					i = code.size();
				}
				i++;
			}
		}
		if (error_counter == 0)
			incorrect = false;
	}
	if (!incorrect)
		object.isbn_code = code;
}

void Book::book_name_init(Book& object)
{
	cout << "Enter the book's name: ";
	cin >> object.book_name;
}

void Book::print_book(Book& object)
{
	cout << object.isbn_code << endl;
}