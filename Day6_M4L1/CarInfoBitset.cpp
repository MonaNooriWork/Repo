#include <iostream>
#include <bitset>

struct CarInfo {
    uint16_t seatBeltFrontLeft : 1; 
    uint16_t seatBeltFrontRight : 1;
    uint16_t seatBeltRearLeft : 1;
    uint16_t seatBeltRearMiddle : 1;
    uint16_t seatBeltRearRight : 1;
    uint16_t WindowFrontLeft : 1;
    uint16_t WindowFrontRight : 1;
    uint16_t WindowRearLeft : 1;
    uint16_t WindowRearRight : 1;
    uint16_t DoorFrontLeft : 1;
    uint16_t DoorFrontRight : 1;
    uint16_t DoorRearLeft : 1;
    uint16_t DoorRearRight : 1;
    uint16_t LightFrontLeft : 1;
    uint16_t LightFrontRight : 1;
    uint16_t LightRearMiddle : 1;};

void printStatus(uint16_t status) {
    CarInfo *f = reinterpret_cast<CarInfo*> (& status);
    std::cout << "Seatbelt front left side: " << f->seatBeltFrontLeft << std::endl;
    std::cout << "Seatbelt front right side: " << f->seatBeltFrontRight << std::endl;
    std::cout << "Seatbelt rear left side: " << f->seatBeltRearLeft << std::endl;
    std::cout << "Seatbelt rear middle : " << f->seatBeltRearMiddle << std::endl;
    std::cout << "Seatbelt rear right side: " << f->seatBeltRearRight << std::endl;
    std::cout << "Window front left side: " << f->WindowFrontLeft << std::endl;
    std::cout << "Window front right side: " << f->WindowFrontRight << std::endl;
    std::cout << "Window rear left side: " << f->WindowRearLeft << std::endl;
    std::cout << "Window rear right side: " << f->WindowRearRight << std::endl;
    std::cout << "Door front right side: " << f->DoorFrontRight << std::endl;
    std::cout << "Door front left side: " << f->DoorFrontLeft << std::endl;
    std::cout << "Door rear right side: " << f->DoorRearLeft << std::endl;
    std::cout << "Door rear left side: " << f->DoorRearRight << std::endl;
    std::cout << "Light right side: " << f->LightFrontLeft << std::endl;
    std::cout << "Light left side: " << f->LightFrontRight << std::endl;
    std::cout << "Light rear middle: " << f->LightRearMiddle << std::endl;
}

int main(){
    uint16_t status;
    status = 0b1011101001011011;
    printStatus(status);
}