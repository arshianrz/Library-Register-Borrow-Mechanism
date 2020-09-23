#ifndef MENU_H
#define MENU_H
#include "member.h"
#include "book.h"

class Menu : public Member
{
protected:


    int counter2_;
    int counter_;
    int counter3_;

    struct holder
    {
      Book tempBook;
      Member tempusr;
    };

    holder record[10];
    Member user[10];
    Book stBook[10];


public:

    Menu();
    void welcome();
    void showMenu();
    void borrow();
    void search();
    void memberReceive();
    void bookReceive();
    void listbook();
    void listmember();
    void listborrow();


};

#endif // MENU_H
