#include "BookClass.h"
#include <iostream>
#include <string>
using namespace std;

//prototypes
void getBookInfo(BookClass& book);

int main() {

	BookClass book;

	getBookInfo(book);
	book.checkOutBook();

	cout << "\nInitial information about the book " << "\n\n";
	cout << "Title: " << book.getTitle() << endl;
	cout << "Number in stock: " << book.getNumInStock() << "\n\n";
	
	book.returnBook();
	
	cout << "\nUpdated information about the book remaining in stock " << "\n\n";
	cout << "Title: " << book.getTitle() << endl;	
	cout << "Number in stock: " << book.getNumInStock() << "\n\n";

	cout << "Information about the book " << "\n\n";
	cout << "Title: " << book.getTitle() << "\n";
	cout << "Number in stock: " << book.getNumInStock() << "\n";


	system("pause");
	return 0;
}

void getBookInfo(BookClass& book) {

	string bookTitle, authorName, bookPublisher, bookISBN;
	double bookPrice;
	int bookYear, booksInStock;

	cout << "Welcome to the Library " << endl;
	cout << "Type the book information below" << "\n";
	cout << "Type the title of the Book: "; getline(cin, bookTitle);
	cout << "Enter author's name: "; getline(cin, authorName);
	cout << "Enter the publisher "; getline(cin, bookPublisher);
	cout << "Enter ISBN: "; cin >> bookISBN;
	cout << "Enter Price: "; cin >> bookPrice;
	cout << "Enter year published: "; cin >> bookYear;
	cout << "Enter how many books in stock: "; cin >> booksInStock;

	book.storeBook(bookTitle, authorName, bookPublisher, bookISBN, bookPrice, bookYear, booksInStock);

}