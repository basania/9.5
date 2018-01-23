
#include "stdafx.h"
#include "Book.h"

Book::Book()
{
	is_isbn_code_valid();
	book_name_init();
	book_author();
	book_auth_rights_date();
	is_book_given();
	print_book();
}


void Book::is_isbn_code_valid()
{
	string code;
	bool incorrect = true;
	char dash = '-';
	while (incorrect) {
		int i = 0;
		int error_counter = 0;
		cout << "Enter 6-symbol ISBN code (e.g. n-n-n-x, where n - character, x - integer): ";
		std::getline(std::cin, code);
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
		isbn_code = code;
}

void Book::book_name_init() ////
{
	cout << "Enter the book's name: ";
	getline(cin, book_name);
}

void Book::book_author() ////
{
	cout << "Enter last name of the book's author: ";
	getline (cin, author_last_name);
}

void Book::book_auth_rights_date()
{
	cout << "Enter date of author rights assignment: ";
	cin >> author_rights;
}

void Book::is_book_given()
{
	string choice;
	bool incorrect = true;
	
	while (incorrect)
	{
		cout << "Was the book given out (y/n)?\n";
		cin >> choice;

		if (choice == "y")
		{
			is_given = "Yes";
			incorrect = false;
		}
		else {
			if (choice == "n")
			{
				is_given = "No";
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

std::string Book::print_book() const
{
	std::string out;
	out += "\nBOOK INFO\n";
	out += "------------------\n";
	out += "Name: " + book_name + '\n';
	out += "Author: " + author_last_name + '\n';
	out += "Author rights assignment date: " + author_rights + '\n';
	out += "Book was given: " + is_given + '\n';
	out += "ISBN code: " + isbn_code;
	out += "\n-----------------\n";
	return out;
}
