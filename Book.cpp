#include <iostream>
#include "book.h"
#include <string>

using namespace std;

Book::Book(){
};
void Book::setTitle(string book_title){
	title = book_title;
};
void Book::setAuthor(string book_author){
	author = book_author;
};
void Book::setPrice(double book_price){
	price = book_price;
};

string Book::getTitle(Book book){
	cout << "The tile of the book is: " + title << endl;
	return title;
};
string Book::getAuthor(Book book){
	cout << "The author of the book is: " + author << endl;
	return author;
};
double Book::getPrice(Book book){
	cout << "The price of the book is: ";
	cout << price ;
	cout << endl;
	return price;
	
};
