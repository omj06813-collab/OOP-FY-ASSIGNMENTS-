#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    int price;
    string authorName;
    string booktitle;

    void displayDetails() {
        cout << "Price:" << price << endl;
        cout << "Author Name:" << authorName << endl;
        cout << "Title:" << booktitle << endl;

    }
};

int main() {
    Book b1; 

    b1.price = 9999;
    b1.authorName = "chetan bhagat";
    b1.booktitle = "nintey tales of ghost";

    b1.displayDetails();

    return 0;
}
