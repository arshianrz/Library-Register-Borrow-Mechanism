#ifndef MEMBER_H
#define MEMBER_H
#include "book.h"


class Member : public Book
{

protected:

    string stnum_;
    string stname_;

    int brDay_;
    int brMonth_;
    int brYear_;



public:

    Member();
    string stname();
    void setStname(string &stname);
    string stnum() ;
    void setStnum(string &stnum);

    void memberReceive();

    int brDay() ;
    void setBrDay(int brDay);
    int brMonth();
    void setBrMonth(int brMonth);
    int brYear() ;
    void setBrYear(int brYear);

};

#endif // MEMBER_H
