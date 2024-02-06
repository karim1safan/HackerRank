#include <vector>
#include <iostream>
using namespace std;

class Book{
protected:
    string title, author;
    
    Book(string title, string author){
        this->title = title;
        this->author = author;
    } 
    
    virtual void display() = 0;
};

class MyBook : public Book{
private:
    int price;
public:
    MyBook(string title, string author, int price) : Book(title, author)
    {
        this->price = price;
    }
    
    void display() override{
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl; 
    }
};

int main() {
    string title,author;
    int price;
    
    getline(cin,title);
    getline(cin,author);
    
    cin>>price;
    
    MyBook novel(title,author,price);
    
    novel.display();  
    return 0;
}
