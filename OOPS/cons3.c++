// copy constructor
#include <iostream>
using namespace std;

class book
{

public:
    string author = "Mr.";
    int price = 50;

    book(string name, int cost)
    {
        this->author = author + name;
        this->price = price + cost;
        cout << "author name is " << author << endl
             << "cost of the book is " << price << endl
             << endl;
    }

    // if we wont initialise a copy constructor compiler will by default  create a copy constructor

    book(book &maths) // pass the object by ref    not      pass by value if not then a copy of maths will be given and copied to copy constructor which creates a loop
    {  cout<<"copy cons called"<<endl;
        this->author = maths.author;
        this->price = maths.price;

    }
};
int main()
{
    book maths("Rs Aggarwal", 300);

    // copy constructor called
    book engmaths(maths);
    cout << "for btech " << engmaths.author << endl
         << "the cost is " << engmaths.price << endl
         << endl;

    return 0;
}