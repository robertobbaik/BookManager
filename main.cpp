#include "BookManager.h"
#include <iostream>

using namespace std;

int main(void)
{
    BookManager *bookManager = new BookManager();
    
    while (true)
    {
        cout << "1. 책 추가\n2. 책 검색\n3. 작가 검색\n4. 책 전체 목록\n0.종료" << endl;

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "책 추가" << endl;
            string title, author;
            cout << "책 제목 : ";
            cin.ignore();
            getline(cin, title);
            cout << "책 저자 : ";
            getline(cin, author);
            bookManager->addBook(title, author);
            break;
        }
        case 2:
        {
            string title;
            cout << "책 제목 : ";
            cin.ignore();
            getline(cin, title);
            bookManager->searchByTitle(title);
            break;
        }
        case 3:
        {
            string author;
            cout << "책 저자 : ";
            cin.ignore();
            getline(cin, author);
            bookManager->searchByAuthor(author);
            break;
        }
        case 4:
        {
            bookManager->displayAllBooks();
            break;
        }

        default:
            cout << "프로그램 종료" << endl;

            return 0;
            break;
        }
    }

    return 0;
}