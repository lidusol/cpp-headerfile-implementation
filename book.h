#ifndef BOOK_H
#define BOOK_H
#include <string>

using namespace std;

class Book{
	public:
		string title, author;
		double price;
		Book();
		void setTitle(string book_title);
		void setAuthor(string book_author);
		void setPrice(double book_price);
		string getTitle(Book book);
		string getAuthor(Book book);
		double getPrice(Book book);
};

#endif
