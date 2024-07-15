#include "Book.h"

// Constructor definition
Book::Book() {}

// SETTERS
void Book::setisbn(string isbn) {
    this->isbn = isbn;
}
void Book::setcat(string cat) {
    this->cat = cat;
}
void Book::settitle(string title) {
    this->title = title;
}
void Book::setauthor(string author) {
    this->author = author;
}
void Book::setprice(double price) {
    this->price = price;
}
void Book::setpagecount(int pagecount) {
    this->pagecount = pagecount;
}

// GETTERS
string Book::getisbn() {
    return isbn;
}
string Book::getcat() {
    return cat;
}
string Book::gettitle() {
    return title;
}
string Book::getauthor() {
    return author;
}
double Book::getprice() {
    return price;
}
int Book::getpagecount() {
    return pagecount;
}
