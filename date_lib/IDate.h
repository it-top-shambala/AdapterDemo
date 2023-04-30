#ifndef ADAPTERDEMO_IDATE_H
#define ADAPTERDEMO_IDATE_H


class IDate {
public:
    virtual int getDay() const = 0;
    virtual int getMonth() const = 0;
    virtual int getYear() const = 0;
};


#endif //ADAPTERDEMO_IDATE_H
