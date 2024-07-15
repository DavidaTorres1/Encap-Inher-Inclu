#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    string isbn;
    string cat;
    string title;
    string author;
    double price;
    int pagecount;

public:
    // Constructors
    Book(); // Default constructor

    // SETTERS
    void setisbn(string isbn);
    void setcat(string cat);
    void settitle(string title);
    void setauthor(string author);
    void setprice(double price);
    void setpagecount(int pagecount);

    // GETTERS
    string getisbn();
    string getcat();
    string gettitle();
    string getauthor();
    double getprice();
    int getpagecount();
};

#endif
