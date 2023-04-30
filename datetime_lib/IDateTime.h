#ifndef ADAPTERDEMO_IDATETIME_H
#define ADAPTERDEMO_IDATETIME_H


class IDateTime {
public:
    virtual int getDay() const = 0;
    virtual int getMonth() const = 0;
    virtual int getYear() const = 0;
    virtual int getHour() const = 0;
    virtual int getMinute() const = 0;
    virtual int getSecond() const = 0;
};


#endif //ADAPTERDEMO_IDATETIME_H
