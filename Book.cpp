//
//  Book.cpp
//  CharlesHudsonProj9
//
//  Charles Hudson
//  CSCI 361
//

#include "Book.h"
#include <string>
namespace Bookdb{
    Book::Book(): author(""),title(""), date(""){
    }
    Book::Book(string a, string t): author(a), title(t),date("") {
    }
    Book::Book(string a, string t, string d): author(a),title(t),date(d){
    }

    string Book::getTitle(){return title;}
    string Book::getAuthor(){return author;}
    string Book::getDate(){return date;}
    void Book::setTitle(string t){title=t;}
    void Book::setAuthor(string a){author=a;}
    void Book::setDate(string d){date = d;}
    void Book::setAll(string a, string t, string d){
        author =a;
        title =t;
        date =d;
    }

    bool operator <(const Book bookL, const Book bookR){
        return (bookL.author < bookR.author);
    }
    bool operator >(const Book bookL, const Book bookR){
        return (bookL.author > bookR.author);
    }
}
