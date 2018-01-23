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
	string is_isbn_code_valid(Book& object);
	void book_name_init(Book& object);
	void print_book(Book& object);

private:
	string isbn_code;
	string book_name;
	string author_last_name;
	string copyright_date;
	bool is_given;
};


