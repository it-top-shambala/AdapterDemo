#ifndef ADAPTERDEMO_ADAPTER_H
#define ADAPTERDEMO_ADAPTER_H

#include "./date_lib/Date.h"
#include "./datetime_lib/DateTime.h"

class AdapterToDateTime {
private:
    IDate* _date;

public:
    AdapterToDateTime(IDate *date) : _date(date) {}

    IDateTime* ToDateTime() {
        return new DateTime(_date->getDay(), _date->getMonth(), _date->getYear(), 0, 0, 0);
    }
};

class AdapterToDate {
private:
    IDateTime* _date;

public:
    AdapterToDate(IDateTime *date) : _date(date) {}

    IDate* ToDate() {
        return new Date(_date->getDay(), _date->getMonth(), _date->getYear());
    }
};


#endif //ADAPTERDEMO_ADAPTER_H
