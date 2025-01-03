#include "BookManager.h"
#include <iostream>

using namespace std;

int main(void)
{
    BookManager *bookManager = new BookManager();
    
    while (true)
    {
        cout << "1. å �߰�\n2. å �˻�\n3. �۰� �˻�\n4. å ��ü ���\n0.����" << endl;

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "å �߰�" << endl;
            string title, author;
            cout << "å ���� : ";
            cin.ignore();
            getline(cin, title);
            cout << "å ���� : ";
            getline(cin, author);
            bookManager->addBook(title, author);
            break;
        }
        case 2:
        {
            string title;
            cout << "å ���� : ";
            cin.ignore();
            getline(cin, title);
            bookManager->searchByTitle(title);
            break;
        }
        case 3:
        {
            string author;
            cout << "å ���� : ";
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
            cout << "���α׷� ����" << endl;

            return 0;
            break;
        }
    }

    return 0;
}