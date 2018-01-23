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
	void book_init(Book& book); // the function is used to init an object with all possible values according to functions listed below
	void is_isbn_code_valid(Book& object);
	void book_name_init(Book& object);
	void book_author(Book& object);
	void book_auth_rights_date(Book& object);
	void is_book_given(Book& object);
	void print_book(Book& object);

private:
	string isbn_code;
	string book_name;
	string author_last_name;
	string author_rights;
	bool is_given;
};


