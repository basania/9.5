
#include "stdafx.h"
#include "Book.h"

void Book::book_init(Book& book)
{
	book.book_name_init(book);
	book.book_author(book);
	book.book_auth_rights_date(book);
	book.is_book_given(book);
	book.is_isbn_code_valid(book);
	book.print_book(book);
}

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
		object.isbn_code = code;
}

void Book::book_name_init(Book& object) ////
{
	cout << "Enter the book's name: ";
	getline(cin, object.book_name);
}

void Book::book_author(Book& object) ////
{
	cout << "Enter last name of the book's author: ";
	getline (cin, object.author_last_name);
}

void Book::book_auth_rights_date(Book& object)
{
	cout << "Enter date of author rights assignment: ";
	cin >> object.author_rights;
}

void Book::is_book_given(Book& object)
{
	string choice;
	bool incorrect = true;
	
	while (incorrect)
	{
		cout << "Was the book given out (y/n)?\n";
		cin >> choice;

		if (choice == "y")
		{
			object.is_given = true;
			incorrect = false;
		}
		else {
			if (choice == "n")
			{
				object.is_given = false;
				incorrect = false;
			}
			else
			{
				cout << "Enter either 'y' or 'n'.\n";
				incorrect = true;
			}
		}
	}
}

void Book::print_book(Book& object)
{
	cout << "\nBOOK INFO\n";
	cout << "------------------\n";
	cout << "Name: " << object.book_name << endl;
	cout << "Author: " << object.author_last_name << endl;
	cout << "Author rights assignment date: " << object.author_rights << endl;
	cout << "Book was given: " << object.is_given << endl;
	cout << "ISBN code: " << object.isbn_code;
	cout << "\n-----------------\n";
}
