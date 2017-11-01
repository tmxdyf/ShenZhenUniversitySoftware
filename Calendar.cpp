//
// Created by cy on 17-11-1.
//

#include "Calendar.h"
#include <iostream>
#include <iomanip>

int year,weekday;//年份，每年第一天(元旦)是星期几

void printMonthHead(int month);

void Calendar::calendarMain(){

    using namespace std;

    cout << "请输入年份:";

    cin >> year;

    weekday=firstDay(year);//得到元旦是星期几

    cout << "\n\n\t\t"<<year<<"年"<<endl;

    for (int i = 1; i <= 12; ++i) {

        printMonth(i);
        cout<<endl;
    }
    cout<<"\n\n";

}

/**
 * 打印每月日历
 * @param month
 */
void Calendar::printMonth(int month){

    using namespace std;

    int i,days;

    printMonthHead(month);

    days=daysofmonth(month);

    for (int j = 1; j <=days ; ++j) {

        cout<< setw(5) <<j;

        weekday=(weekday+1)%7;

        if (weekday==0){
            cout<<endl;
            cout<<setw(5)<<" ";
        }

    }


}

/**
 * 打印每月月头
 * @param month
 */
void printMonthHead(int month){

    using namespace std;

    cout<<"\n"<<setw(5)<<month;

    cout<<"月 日 一 二 三 四 五 六"<< endl;

    cout<<setw(5)<<" ";

    for (int i = 0; i < weekday; ++i) {
        cout<<setw(5)<<" ";
    }

}



/**
 * 判断是否为润年
 * @param y
 * @return
 */
bool Calendar::leapyear(int y){

    return y%4==0&&y%100!=0||y%400==0;
}
/**
 * 判断每个月的天数
 * @param month
 * @return
 */
int Calendar::daysofmonth(int month){

    switch (month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            if (leapyear(year))
                return 29;
            else
                return 28;
    }
    return 0;
}


/**
 * 计算每年第一天(元旦)是星期几
 * @param year
 * @return
 */

int Calendar::firstDay(int year){


    long s;
    s=year*365;
    for (int i = 1; i < year; ++i) {

        s+= leapyear(i);
    }
    return 0;
}

