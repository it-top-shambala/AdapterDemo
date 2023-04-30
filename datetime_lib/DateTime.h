#ifndef ADAPTERDEMO_DATETIME_H
#define ADAPTERDEMO_DATETIME_H

#include "IDateTime.h"

class DateTime : public IDateTime {
private:
    int _day;
    int _month;
    int _year;
    int _hour;
    int _minute;
    int _second;

public:
    DateTime(int day, int month, int year, int hour, int minute, int second) : _day(day), _month(month), _year(year),
                                                                               _hour(hour), _minute(minute),
                                                                               _second(second) {}

    int getDay() const override {
        return _day;
    }

    int getMonth() const override {
        return _month;
    }

    int getYear() const override {
        return _year;
    }

    int getHour() const override {
        return _hour;
    }

    int getMinute() const override {
        return _minute;
    }

    int getSecond() const override {
        return _second;
    }
};


#endif //ADAPTERDEMO_DATETIME_H
