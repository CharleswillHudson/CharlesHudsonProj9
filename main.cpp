//
//  main.cpp
//  CharlesHudsonProj9
//  Charles Hudson
//  CSCI 361

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include "Book.h"
using namespace std;
using namespace Bookdb;

//fuctions to use in main
void addBook(vector<Book> &bookData);
//adds book to vector bookData vector
void print(vector<Book> &bookData);
//print full list of books for bookData that is sorted
void sortBooks(vector<Book> &bookData);
//sorts books in bookData using sort from algorithm
void printMenu();
//prints the menu for user

int main(int argc, const char * argv[]) {
    //declare vector to hold Book object
    vector<Book> bookData;
    
    int userPick = 0;
    while (userPick !=3) {
        printMenu();
        cin>>userPick;
        cin.ignore();
        
        switch (userPick) {
            case 1:
                addBook(bookData);
                break;
            case 2:
                print(bookData);
                break;
            case 3:
                break;
            default:
                cout<<"invalid choice"<<endl;
                break;
        }
    }
   
    return 0;
}
void addBook(vector<Book> &bookData){
    string author, title, date;
    cout<<"Enter title:"<<endl;
    getline(cin, title);
    cout<<"Enter author"<<endl;
    getline(cin, author);
    cout<<"Enter date"<<endl;
    getline(cin, date);
    
    Book newBook(author,title,date) ;
    bookData.push_back(newBook);
    
}
void print(vector<Book> &bookData){
    sortBooks(bookData);
    cout<<"The books entered so far, sorted alphabetically by author are:"<<endl;
    for(unsigned int i=0; i<bookData.size(); i++){
        cout<<"\t"<<bookData[i].getAuthor()<<", "<<bookData[i].getTitle()<<", "
            <<bookData[i].getDate()<<"."<<endl;
    }
    
}
void sortBooks(vector<Book> &bookData){
    sort(bookData.begin(),bookData.end());
    
}
void printMenu(){
    cout<<endl;
    cout<<"Select from thefollowing choices:"<<endl;
    cout<<"1.\t Add new book"<<endl;
    cout<<"2.\t Print listing sorted by author"<<endl;
    cout<<"3.\t Quit"<<endl;
}
