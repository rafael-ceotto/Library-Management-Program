#include <iostream>
#include <iomanip>
using namespace std;

class BookClass {

	string title;
	string author;
	string publisher;
	string isbn;
	double price;
	int year;
	int numInStock;

public:
	void storeBook(string bookTitle, string authorName, string bookPublisher, string bookISBN,
		double bookPrice, int bookYear, int booksInStock) {

		bookTitle = title;
		authorName = author;
		bookPublisher = publisher;
		bookISBN = isbn;
		bookPrice = price;
		bookYear = year;
		booksInStock = numInStock;

	}

	void displayBook() {


		cout << "Book Title: " << title << endl;
		cout << "Book Author: " << author << endl;
		cout << "Book Publisher: " << publisher << endl;
		cout << "Book ISBN: " << isbn << endl;
		cout << "Enter Price of Book: " << fixed << setprecision(2) << price << endl;
		cout << "Year of Book: " << year << endl;
		cout << "How many books in Stock: " << numInStock << endl;
	}

	void checkOutBook() {

		if (numInStock > 0) {
			cout << "Checking out the book requested." << "\n";
			numInStock--;
		}
		else {
			cout << "\nWe didn't find the book in our stock" << "\n";
		}

	}

	void returnBook() {
		cout << "You've returned the book. Thanks for using our services." << "\n";
		numInStock++;
	}

	string getTitle() {
		return title;
	}

	int getNumInStock() {
		return numInStock;
	}
};





