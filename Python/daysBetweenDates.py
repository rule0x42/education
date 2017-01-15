# Define a daysBetweenDates procedure that would produce the
# correct output if there was a correct nextDay procedure.
#
# Udacity course work

def isLeapYear(year):
    if year % 400 == 0:
        return True
    if year % 100 == 0:
        return False
    if year % 4 == 0:
        return True
    return False


def daysInMonth(year, month):
    """Provides days for each month of the year including leap years"""
    days_of_months = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if isLeapYear(year):
        days_of_months[1] = 29
    return days_of_months[month - 1]


def dateIsBefore(year1, month1, day1, year2, month2, day2):
    """Returns True if year1-month1-day1 is before
       year2-month2-day2. Otherwise, returns False."""
    if year1 < year2:
        return True
    if year1 == year2:
        if month1 < month2:
            return True
        if month1 == month2:
            # 'assert not' makes this true for a result
            # of: days = 0
            return day1 < day2
    return False


def nextDay(year, month, day):
    """Simple version: assume every month has 30 days"""
    if day < daysInMonth(year, month):
        return year, month, day + 1
    else:
        if month == 12:
            return year + 1, 1, 1
        else:
            return year, month + 1, 1


def daysBetweenDates(year1, month1, day1, year2, month2, day2):
    """Returns the number of days between year1/month1/day1
       and year2/month2/day2. Assumes inputs are valid dates
       in Gregorian calendar, and the first date is not after
       the second."""
    assert not dateIsBefore(year2, month2, day2, year1, month1, day1)
    days = 0
    while dateIsBefore(year1, month1, day1, year2, month2, day2):
        year1, month1, day1 = nextDay(year1, month1, day1)
        days += 1
    return days


def test():
    test_cases = [((2012, 9, 30, 2012, 10, 30), 30),
                  ((2012, 1, 1, 2013, 1, 1), 366),
                  ((2012, 9, 1, 2012, 9, 4), 3),
                  ((2016, 9, 1, 2012, 9, 4), "AssertionError"),
                  ((2012, 10, 1, 2012, 9, 1), "AssertionError"),
                  ((2012, 9, 1, 2012, 9, 1), 0),
                  ((1900, 1, 1, 1999, 12, 31), 36523)]
    for (args, answer) in test_cases:
        try:
            result = daysBetweenDates(*args)
            if result != answer:
                print "Expected:", answer, "Received:", result
            else:
                print "Test case passed!"
        except AssertionError:
            if answer == "AssertionError":
                print "Test case passed!"
            else:
                print "Exception: {0} raised AssertionError!\n".format(args)


test()
