
#include "stdafx.h"
#include "Book.h"



string Book::is_isbn_code_valid(Book& object)
{
	string code;
	cout << "Enter 6-symbol ISBN code: ";
	cin >> code;

	if (code.size() > 7) {
		return "Code shouldn't be more than 6 symbols\n";
	}
	char dash = '-';
	int i = 0;

	while (i < code.size())
	{
		if (code[1] != dash || code[3] != dash || code[5] != dash)
			return "Incorrect position of dashes\n";
		if (!isalpha(code[0]) || !isalpha(code[0]) || !isalpha(code[4]))
			return "Incorrect position of characters\n";
		if (!isdigit(code[6]))
			return "Incorrect position of the digit\n";
		i++;
	}
	object.isbn_code = code;

	return object.isbn_code;
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