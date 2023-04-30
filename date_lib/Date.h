#ifndef ADAPTERDEMO_DATE_H
#define ADAPTERDEMO_DATE_H

#include "IDate.h"

class Date : public IDate {
private:
    int _day;
    int _month;
    int _year;

public:
    Date(int day, int month, int year) : _day(day), _month(month), _year(year) {}

    int getDay() const override {
        return _day;
    }

    int getMonth() const override {
        return _month;
    }

    int getYear() const override {
        return _year;
    }
};


#endif //ADAPTERDEMO_DATE_H
