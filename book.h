#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>


using namespace std;

class Book
{
protected:

    string book_;
    string writer_;
    int pubDay_;
    int pubMonth_;
    int pubYear_;

public:


    Book();
    string book() ;
    void setBook(string &book);
    string writer() ;
    void setWriter( string &writer);

    void bookReceive();
    void setPubDay(int pubDay);
    void setPubMonth(int pubMonth);
    void setPubYear(int pubYear);
    int pubDay() ;
    int pubMonth() ;
    int pubYear();
    string *getPtrwriter() const;
    void setPtrwriter(string *value);
};

#endif // BOOK_H
