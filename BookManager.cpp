#include "BookManager.h"

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

Book::Book(string &title, string &author) : title(title), author(author)
{
}

Book::~Book()
{

}

string Book::getTitle() const
{
    return title;
}

string Book::getAuthor() const
{
    return author;
}

BookManager::BookManager()
{
}

BookManager::~BookManager()
{
}

void BookManager::addBook(string &title, string &author)
{
    Book *book = new Book(title, author);

    books.push_back(*book);
}

void BookManager::displayAllBooks()
{
    for (vector<Book>::iterator iter = books.begin(); iter != books.end(); iter++)
    {
        cout << "Title : " << iter->getTitle() << endl;
        cout << "Author : " << iter->getAuthor() << endl;
        cout << "---------------------------" << endl;
    }
}

void BookManager::searchByTitle(string &title)
{
    bool isBookFound = false;
    for (vector<Book>::iterator iter = books.begin(); iter != books.end(); iter++)
    {
        if (iter->getTitle() == title)
        {
            isBookFound = true;
            cout << " : 있음" << endl;
        }
    }

    if (!isBookFound)
    {
        cout << " : 없음" << endl;
    }
}

void BookManager::searchByAuthor(string &author)
{
    bool isBookFound = false;
    for (vector<Book>::iterator iter = books.begin(); iter != books.end(); iter++)
    {
        if (iter->getAuthor() == author)
        {
            isBookFound = true;
            cout << " : 있음" << endl;
        }
    }

    if (!isBookFound)
    {
        cout << " : 없음" << endl;
    }
}