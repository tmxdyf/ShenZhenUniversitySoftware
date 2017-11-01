//
// Created by cy on 17-11-1.
//

#ifndef HELLOWORLD_CALENDAR_H
#define HELLOWORLD_CALENDAR_H


class Calendar {

public:
    void calendarMain();
    bool leapyear(int year);
    int firstDay(int year);

private:
    int daysofmonth(int month);
    void printMonth(int month);
};


#endif //HELLOWORLD_CALENDAR_H
