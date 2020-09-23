#include "Reception.h"
#include <cstdlib>
#include <iomanip>


Menu::Menu()
{
    welcome();
    counter_=0;
    counter2_=0;
    counter3_=0;
}
void Menu::welcome()
{
    cout<<"\n"<<"              *-*-*-*Welcome to AMRL's library*-*-*-*\n\n\n";
}
void Menu::showMenu()
{
    int a;
    do {
        cout<<"-------------------------------------------------------------------------------\n";
        cout<<" If you want to commit new person's information :"<<setw(10)<<"  Press 1.\n\n";
        cout<<" If you want to commit new book's information :"<<setw(14)<<"  Press 2.\n\n";
        cout<<" If you want to search for borrower information :"<<setw(10)<<"  Press 3.\n\n";
        cout<<" If you want to borrow a book :"<<setw(30)<<"  Press 4.\n\n";
        cout<<" If you want to list  books :"<<setw(32)<<"  Press 5.\n\n";
        cout<<" If you want to list  members :"<<setw(30)<<"  Press 6.\n\n";
        cout<<" If you want to see borrowed list :"<<setw(26)<<" Press 7.\n\n";
        cout<<" If you want to quit :"<<setw(38)<<"  Press 0.\n";

        cin>>a;
        switch (a)
        {
        case 1:
            memberReceive();
            counter2_++;
            break;
        case 2:
            bookReceive();
            counter_++;
            break;
        case 3:
            search();
            break;
        case 4:
            borrow();
            counter3_++;
            break;
        case 5:
            listbook();
            break;
        case 6:
            listmember();
            break;
        case 7:
            listborrow();
        }
    } while ( a != 0);

    abort();
}
void Menu::memberReceive()
{
    string tempname;
    string tempno;


    cout<<"Please enter student's name : ";
    cin>>tempname;
    user[counter2_].setStname(tempname);

    cout<<"\nPlease enter student's number : ";
    cin>>tempno;
    user[counter2_].setStnum(tempno);
    cout<<endl;



}
void Menu::bookReceive()
{
    string tembook;
    string tempwriter;
    int tempPubYear;
    int tempPubMonth;
    int tempPubDay;

    cout<<"Please enter name of the book : ";
    cin>>tembook;
    stBook[counter_].setBook(tembook);

    cout<<"\nPlease enter book writer's name : ";
    cin>>tempwriter;
    stBook[counter_].setWriter(tempwriter);

    cout<<"\nPlease enter book's publication date : \n";

    cout<<"Day :";
    cin>>tempPubDay;
    stBook[counter_].setPubDay(tempPubDay);

    cout<<"\nMonth :";
    cin>>tempPubMonth;
    stBook[counter_].setPubMonth(tempPubMonth);

    cout<<"\nYear :";
    cin>>tempPubYear;
    stBook[counter_].setPubYear(tempPubYear);
    cout<<endl;


}


void Menu::borrow()
{
    string tempName;
    string tempBook;

    int tempDay;
    int tempMonth;
    int tempYear;

    cout<<"Enter your name :";
    cin>>tempName;
    record[counter3_].tempusr.setStname(tempName);
    cout<<"\nEnter your intended book:";
    cin>>tempBook;
    record[counter3_].tempBook.setBook(tempBook);


    cout<<"\nPlease enter delivery date : \n";
    cout<<"Day :";
    cin>>tempDay;
    record[counter3_].tempusr.setBrDay(tempDay);
    cout<<"\nMonth :";
    cin>>tempMonth;
    record[counter3_].tempusr.setBrMonth(tempMonth);
    cout<<"\nYear :";
    cin>>tempYear;
    record[counter3_].tempusr.setBrYear(tempYear);

}

void Menu::search()
{
    string temp;
    cout<<"You are in search part now,please enter book name. \n";
    cin>>temp;  
    for (int i=0 ; i<counter3_ ; i++)
    {
       if(record[i].tempBook.book()==temp)
       {
           cout<<"Book Borrowed \nDelivery Date is :"<<
           record[i].tempusr.brDay()<<"/"<<record[i].tempusr.brMonth()<<"/"<<record[i].tempusr.brYear();
           cout<<endl;

           cout<<record[i].tempusr.stname()<<" has this book\n";
       }
    }
}
void Menu::listbook()
{
    cout<<"Book lists";
    for(int i=0 ; i<counter_ ; i++)
    {
        cout<<"\nBook : "<<i+1<<"\n Name : "<<setw(13)<<stBook[i].book()<<endl;
        cout<<" Writer : "<<setw(11)<<stBook[i].writer()<<endl;
        cout<<" Publish Date : "<<setw(4)<<stBook[i].pubDay()<<"/"<<stBook[i].pubMonth()<<"/"<<stBook[i].pubYear()<<endl<<"*********\n";
    }

}

void Menu::listmember()
{
    cout<<"Student lists";
    for(int i=0 ; i<counter2_ ; i++)
    {
        cout<<"\nStudent : "<<i+1<<"\n Name : "
        <<user[i].stname()<<endl;
        cout<<" ID : "<<user[i].stnum()<<endl<<"**********\n";
    }

}
void Menu::listborrow()
{
    cout<<"\nBorrowed Book lists \n";
    for(int i=0 ; i<counter3_ ; i++)
    {
        cout<<"Borrower"<<i+1<<endl;
        cout<<"Borrower's name :"<<record[i].tempusr.stname()<<endl;
        cout<<"Book's name :"<<record[i].tempBook.book()<<endl;
        cout<<"Delivery Date is :"<<record[i].tempusr.brDay()<<"/"<<record[i].tempusr.brMonth()<<"/"<<record[i].tempusr.brYear();
        cout<<endl;
    }

}
