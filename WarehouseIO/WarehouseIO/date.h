#ifndef DATE_H
#define DATE_H
#include <string>
#include <sstream>
#include <iomanip>
#include <QString>
using namespace std;

//Since the length of each month varies unpredictably, they are listed individually
const int MONTH_LENGTHS[] = {
        31,	//January
        28, //February
        31, //March
        30, //April
        31, //May
        30, //June
        31, //July
        31, //August
        30, //September
        31, //October
        30, //November
        31	//December
};

//The names of each month, the indexes of the string array are lined up to the
//integer value of the enum
const string MONTH_NAMES[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
};

//Enum representing all of the possible months of the year
enum Month
{
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

const string DATE_LOW = "00/00/0000";
const string DATE_HIGH = "99/99/9999";

class Date
{
public:
    /*** Constructors ***/
    Date();
    Date(Month initMonth, int initDay, int initYear);
    Date(QString dateString);

    //Change the date stored in the object. Error checks input and only assigns
    //if valid. Returns if input is valid
    bool Set(Month newMonth, int newDay, int newYear);
    bool Set(QString dateString);

    //Checks if a given day is valid for a time in the year. Compatible with
    //leap years
    bool CheckDay(int newDay, Month currentMonth, int currentYear);
    //Checks if year is between 1900 and 2200 for this program
    bool CheckYear(int newYear);

    //Formats the date into a string with format MM/DD/YYY
    string DateSimple() const;
    //Formats the date into a string with format Month day, Year
    string DateFull() const;

private:
    Month   month; //Month of the year
    int		day;  //Day of the month
    int		year; //Year
};

#endif // DATE_H
