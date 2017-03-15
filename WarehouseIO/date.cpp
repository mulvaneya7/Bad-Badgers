/**************************************************************************
 * AUTHOR		 : Andrew Gadbois
 * STUDENT ID	 : 366745
 * ASSIGNMENT #4 : Friend Functions and Operator Overloading
 * CLASS		 : CS1C
 * SECTION		 : TTh 2:30PM - 3:50PM
 * DUE DATE		 : 2/2/2017
 *************************************************************************/
#include "Date.h"

/**************************************************************************
 * Date
 * _______________________________________________________________________
 * This method serves as the default constructor to set a default date
 *************************************************************************/
Date::Date() : month{JANUARY}, day {1}, year {1900}
{
}

Date::Date(Month initMonth,	//Initial month to build with
           int initDay, 	//Initial day
           int initYear):	//Initial year
           month {initMonth},//Assigns the values given into the data members
           day	 {initDay},
           year	 {initYear}
{
    //Checks the given data to see if it is valid, if it is invalid, the default
    //date is used instead
    if (!(CheckYear(initYear) && CheckDay(initDay, initMonth, initYear)))
    {
        month = JANUARY;
        day = 1;
        year = 1900;
    }
}

/**************************************************************************
 * Set
 * _______________________________________________________________________
 * This method changes all of the data members of the date class after error
 * checking the day and year. Returns if the given values were valid
 *************************************************************************/
bool Date::Set(Month newMonth,	//New month to be assigned
               int newDay,		//New day to be assigned
               int newYear)		//New year to be assigned
{
    bool valid;	//If the input is valid

    valid = CheckYear(newYear); //Checks if year is valid and stores value in valid
    //If valid is false (year is invalid), check is skipped and valid stays false
    //Otherwise, the day is checked according with the month and year and stored in valid
    valid = valid && CheckDay(newDay, newMonth, newYear);

    //If both day and year are valid, the new values are stored into the object
    if (valid)
    {
        month = newMonth;
        day = newDay;
        year = newYear;
    }

    return valid;
}

Date::Date(QString dateString)
{
    Set(dateString);
}

bool Date::Set(QString dateStringIn)
{
    bool valid;
    //Temporary values to store date information to check
    int tmpMonth;
    int tmpDay;
    int tmpYear;
    string dateString = dateStringIn.toStdString();
    //Checks if string is correct length, if not rest of code is skipped
    valid = (dateString.size() == 10);

    //Until a false value is found or the end of the string is reached, each character
    //is checked to be within proper bounds (ensures proper formatting)
    for (int i = 0; valid && i < 10; i++)
    {
        valid = dateString[i] >= DATE_LOW[i] && dateString[i] <= DATE_HIGH[i];
    }

    //If format is valid, convert string to date integers to check actual values
    if (valid)
    {
        tmpMonth = stoi(dateString.substr(0,2));
        tmpDay = stoi(dateString.substr(3,2));
        tmpYear = stoi(dateString.substr(6,4));
    }

    //Check that the date itself exists
    valid = valid && tmpMonth > 0 && tmpMonth <= 12
                  && CheckYear(tmpYear)
                  && CheckDay(tmpDay, Month(tmpMonth - 1), tmpYear);

    //If all is good, store new value into object
    if (valid)
    {
        month = Month(tmpMonth-1);
        day = tmpDay;
        year = tmpYear;
    }

    return valid;
}

/**************************************************************************
 * CheckDay
 * _______________________________________________________________________
 * This method checks if a given date is within the boundaries of the current
 * month for the given year (compatible with leap years)
 *************************************************************************/
bool Date::CheckDay (int newDay,		//Day to check if valid
                     Month currentMonth,//Month is used for reference
                     int currentYear)	//If month is FEBRUARY, year is needed to
                                        //see if the 29th exists
{
    bool valid; //If day is valid

    valid = newDay > 0; //Day is always positive

    //Month lengths is used as reference as an upper boundary
    valid = valid && newDay <= (MONTH_LENGTHS[currentMonth] +
            //Checks for leap year, if leap year is found, adds 1 to length of Feb
                    ((currentYear % 4 == 0 && currentMonth == FEBRUARY) ? 1 : 0));
    return valid;
}

/**************************************************************************
 * CheckYear
 * _______________________________________________________________________
 * This method checks if the year is within a preset boundary
 *************************************************************************/
bool Date::CheckYear (int newYear)
{
    return (newYear >= 1900 && newYear <= 2200);
}

/**************************************************************************
 * DateSimple
 * _______________________________________________________________________
 * This method formats the date into a string with format MM/DD/YYYY
 *************************************************************************/
QString Date::DateSimple() const
{
    ostringstream oString; //Output string to be created

    oString << right << setfill('0');
    oString << setw(2) << int(month) + 1 << '/' << setw(2) << day << '/' << year;

    return QString::fromStdString(oString.str());
}


/**************************************************************************
 * DateFull
 * _______________________________________________________________________
 * This method formats the date into a string with format Month Day, Year
 *************************************************************************/
QString Date::DateFull() const
{

    ostringstream oString; //Output string to be created
    oString << MONTH_NAMES[int(month)] << ' ' << day << ", " << year;
    return QString::fromStdString(oString.str());
}

Date Date::operator +=(int addingYears)
{
    Date addDate = *this;
    addDate.year = addDate.year + addingYears;
    return addDate;
}
