#include <iostream>
#include "Book.h"

using namespace std;

int main() {
    Book HarryPotter;

    // Trying a bunch of setters
    HarryPotter.setisbn("EH2FA359EFHUI");
    HarryPotter.setcat("Fantasy");
    HarryPotter.settitle("Harry Potter: The last pot.");
    HarryPotter.setauthor("David Torres");
    HarryPotter.setprice(70.12);
    HarryPotter.setpagecount(4201);

    // Trying a bunch of getters
    cout << "ISBN: "        << HarryPotter.getisbn() << endl;
    cout << "Category: "    << HarryPotter.getcat() << endl;
    cout << "Title: "       << HarryPotter.gettitle() << endl;
    cout << "Author: "      << HarryPotter.getauthor() << endl;
    cout << "Price: "       << HarryPotter.getprice() << endl;
    cout << "Page count: "  << HarryPotter.getpagecount() << endl;

    cout << "Fin." << endl;
    return 0;
}
