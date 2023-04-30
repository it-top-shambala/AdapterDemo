#include <iostream>

#include "./date_lib/Date.h"
#include "./datetime_lib/DateTime.h"

#include "Adapter.h"

using namespace std;

int main() {
    IDate* date_1 = new Date(30, 4, 2023);
    AdapterToDateTime* adapterToDateTime = new AdapterToDateTime(date_1);
    IDateTime* dateTime_1 = adapterToDateTime->ToDateTime();
    cout << dateTime_1->getYear() << "-" << dateTime_1->getMonth() << "-" << dateTime_1->getDay() << "_" << dateTime_1->getHour() << "-" << dateTime_1->getMinute() << "-" << dateTime_1->getSecond() << endl;

    IDateTime* dateTime_2 = new DateTime(1, 5, 2023, 8, 30, 0);
    AdapterToDate* adapterToDate = new AdapterToDate(dateTime_2);
    IDate* date_2 = adapterToDate->ToDate();
    cout << date_2->getYear() << "-" << date_2->getMonth() << "-" << date_2->getDay() << endl;

    return 0;
}
