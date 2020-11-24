// A car service shop needs to keep track of the records of services they provide to their customer. Create a system
// for them so they could keep ATLEAST the below records:
// • Date the customer visited
// • Services performed (at least 2 different services)
// • Parts changed (at least 2 different parts)
// • Payment (method & amount)



#include "carServiceRecord.h"

void service::print(){
    std::cout << "Visit date: " << date.Day << "." << date.Month << "." << date.Year << "\n";
    std::cout << "Car brand: " << CarBrand << "\n";
    std::cout << "Services provided: " << Parts << "\n";
    std::cout << "Payment method: " << payment.Method << "Payment amount: " << payment.Amount << "\n" << "\n";
}

int main(){

    service customer1, customer2;

    customer1.CarBrand = "AAA";
    customer1.date.Day = 5;
    customer1.date.Month = 9;
    customer1.date.Year = 2020;
    customer1.Parts = "GearBox";
    customer1.payment.Method = "Quick";
    customer1.payment.Amount = 123;

    customer2.CarBrand = "BBB";
    customer2.date.Day = 19;
    customer2.date.Month = 8;
    customer2.date.Year = 2001;
    customer2.Parts = "Oil";
    customer2.payment.Method = "Quick";
    customer2.payment.Amount = 123;

    customer1.print();
    customer2.print();

}