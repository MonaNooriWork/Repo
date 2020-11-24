#include <iostream>


struct Date{
    int Day;
    int Month;
    int Year;
};

struct Payment{
    int Amount;
    std::string Method;
};

class service{
    public:
        std::string CarBrand;
        Date date;
        std::string Services;
        std::string Parts;
        Payment payment;
        void print();
};