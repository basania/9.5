// 9.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Book.h"


int main()
{
	Book book1;
	book1.is_isbn_code_valid(book1);
	book1.print_book(book1);
	
    return 0;
}

