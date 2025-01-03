#ifndef BOOK_MANAGER_H_
#define BOOK_MANAGER_H_

#include <string>
#include <vector>

using namespace std;

class Book
{
public:
    Book(string &title, string &author);
    ~Book();
    string getTitle() const;
    string getAuthor() const;
private:
    string title;
    string author;
};

class BookManager
{
public:
    BookManager();
    ~BookManager();
    void addBook(string &title, string &author);
    void displayAllBooks();
    void searchByTitle(string &title);
    void searchByAuthor(string &author);
private: 
    vector<Book> books;
};

#endif