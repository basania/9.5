// 9.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "Book.h"



string Book::is_isbn_code_valid(Book object)
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
		{
			return "Incorrect position of dashes\n";
		}
		i++;
	}
	isbn_code = code;
	return code;
}


int main()
{
	Book book1;
	cout << "Book's ISBN is " << book1.is_isbn_code_valid(book1)<< "\n";
    return 0;
}

