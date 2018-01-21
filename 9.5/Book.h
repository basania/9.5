#pragma once

#include <iostream>


using std::string;
using std::cout;
using std::cin;
using std::endl;

class Book
{
public:
	Book(/*string code, string name, string last_name, string date*/);
	~Book();
	string is_isbn_code_valid(Book object);


private:
	string isbn_code;
	string book_name;
	string author_last_name;
	string copyright_date;
	bool is_given;
};

Book::Book(/*string code, string name, string last_name, string date*/)
	//:isbn_code{ code }, book_name{ name }, author_last_name{ last_name }, copyright_date{ date }
{
	cout << "Constructor\n";
}

Book::~Book()
{
	//cout << "\nDestructor\n";
}