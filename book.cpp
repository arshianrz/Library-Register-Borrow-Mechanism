#include "book.h"

Book::Book()
{}



void Book::setPubDay(int pubDay)
{
    pubDay_ = pubDay;
}

void Book::setPubMonth(int pubMonth)
{
    pubMonth_ = pubMonth;
}

void Book::setPubYear(int pubYear)
{
    pubYear_ = pubYear;
}

int Book::pubDay()
{
    return pubDay_;
}

int Book::pubMonth()
{
    return pubMonth_;
}

int Book::pubYear()
{
    return pubYear_;
}

string Book::book()
{
    return book_;
}

void Book::setBook(string &book)
{
    book_ = book;
}

string Book::writer()
{
    return writer_;
}

void Book::setWriter( string &writer)
{
    writer_ = writer;
}

