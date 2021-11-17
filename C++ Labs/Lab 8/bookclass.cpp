#include "iostream"
#include "iostream"
#include "string"
using namespace std;

class Book{
public:
    string book_title;
    float book_price;
    string book_author;
    void get_Bookdetails()
    {
      getline(cin, book_title);
      cin>>book_price; cin.ignore();
      getline(cin, book_author);
    }
    void put_Bookdetails()
    {
      cout<<"Title: "<<book_title<<"\nPrice: "<<book_price<<"\nAuthor: "<<book_author;
    }
};

int main()
{
  int n = 3;
  Book b[n];
  for (int i = 0; i < n; ++i) b[i].get_Bookdetails();
  for (int i = 0; i < n; ++i) { b[i].put_Bookdetails(); cout<<"\n\n"; }
}