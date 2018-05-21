//
//  Book.h
//  CharlesHudsonProj9
//
//  Charles Hudson
//  CSCI 361
//

#ifndef Book_h
#define Book_h
#include <string>
using namespace std;
namespace Bookdb {
  
    class Book{
    public:
        Book();
        Book(string t, string a);
        Book(string a, string t, string d);
        
        string getTitle();
        string getAuthor();
        string getDate();
        void setTitle(string t);
        void setAuthor(string a);
        void setDate(string d);
        void setAll(string a, string t, string d);
        
        friend bool operator <(const Book bookL, const Book bookR);
        //> is not needed for project but seemed good to add
        friend bool operator >(const Book bookL, const Book bookR);

    private:
        string title;
        string author;
        string date;
};
}
#endif /* Book_h */
