#include "member.h"
Member::Member()
{

}

int Member::brDay()
{
    return brDay_;
}

void Member::setBrDay(int brDay)
{
    brDay_ = brDay;
}

int Member::brMonth()
{
    return brMonth_;
}

void Member::setBrMonth(int brMonth)
{
    brMonth_ = brMonth;
}

int Member::brYear()
{
    return brYear_;
}

void Member::setBrYear(int brYear)
{
    brYear_ = brYear;
}


string Member::stname()
{
    return stname_;
}

void Member::setStname(string &stname)
{
    stname_ = stname;
}

string Member::stnum()
{
    return stnum_;
}

void Member::setStnum(string &stnum)
{
    stnum_ = stnum;
}

