#include <iostream>
#include "book.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Book book;
	book.setTitle("Software Engineering");
	book.setAuthor("Ian Sommerville");
	book.setPrice(25.0);
	book.getTitle(book);
	book.getAuthor(book);
	book.getPrice(book);
	
	return 0;
}
