#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>


using std::string;
using std::cout;
using std::cin;
using std::endl;

class Book
{
public:
	Book();
	void is_isbn_code_valid();
	void book_name_init();
	void book_author();
	void book_auth_rights_date();
	void is_book_given();
	std::string print_book() const;
	friend std::ostream & operator<< (std::ostream & stream, const Book & obj)
	{
		stream << obj.print_book();
		return stream;
	}

private:
	string isbn_code;
	string book_name;
	string author_last_name;
	string author_rights;
	string is_given;
};



