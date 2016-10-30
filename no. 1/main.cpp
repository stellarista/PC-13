#include <iostream>
#include <cstdlib>

using namespace std;
class Date
{
    int month;
    int day;
    int year;
public:
    Date();
    Date(int day, int month, int year);
    int getMonth();
    int getDay();
    int getYear();
};

Date::Date(int day, int month, int year)
{
    if (month >= 0 && month <= 13)
    {
        this->month = month;
    }

    if (day >= 0 && day <= 32)
    {
        this->day = day;
    }

    this->year = year;
}

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

int main()
{
    string months[12] = {"January", "February" , "March", "April",
                            "May", "June", "July", "August", "September",
                            "October", "November", "December"};

    int d, m, y;

    cout << "Date: ";
    cin >> d;
    cout << "Month: ";
    cin>>m;
    cout <<"Year: ";
    cin>>y;

    Date today (d, m, y);

    cout << today.getDay() << "/" << today.getMonth() << "/" << today.getYear() << endl;
    cout << months[today.getMonth()-1] << " " << today.getDay() << ", " << today.getYear() << endl;
    cout << today.getDay() << " " << months[today.getMonth()-1] << " " << today.getYear() << endl;

    return 0;
}

