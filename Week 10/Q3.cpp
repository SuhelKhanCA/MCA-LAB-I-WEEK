#include <iostream>
#include <string>

struct Book {
    int book_id;
    std::string title;
    std::string author;
    double price;
};

void printBookDetails(const Book& book) {
    std::cout << "Book ID: " << book.book_id << std::endl;
    std::cout << "Title: " << book.title << std::endl;
    std::cout << "Author: " << book.author << std::endl;
    std::cout << "Price: " << book.price << std::endl;
}

int main() {
    Book myBook;

    myBook.book_id = 1;
    myBook.title = "The Great Gatsby";
    myBook.author = "F. Scott Fitzgerald";
    myBook.price = 10.99;

    printBookDetails(myBook);

    return 0;
}

