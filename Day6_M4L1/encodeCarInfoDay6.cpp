#include <iostream>
#include <bitset>
#include <cstring>

struct SpeedDistanceStatus
{
    unsigned speed : 4; // Speed = 4 bits
    unsigned front : 3; // Front = 3 bits
    unsigned rear : 3;  // Rear  = 3 bits
    unsigned right : 3; // Right = 3 bits
    unsigned left : 3;  // Left  = 3 bits
}; 
//__attribute__((packed));

uint16_t Encode(int Speed, int FrontDistance, int RearDistance, int RightDistance, int LeftDistance)
{
    SpeedDistanceStatus sts;
    if (Speed >= 300)
    {
        Speed = 300;
        sts.speed = Speed / 20;
        std::cout << "Normalized speed: " << sts.speed << " which is " << std::bitset<4>(sts.speed) << std::endl;
    }
    else
    {
        sts.speed = Speed / 20;
        std::cout << "Normalized speed: " << sts.speed << " which is " << std::bitset<4>(sts.speed) << std::endl;
    }

    sts.front = FrontDistance / 150;
    std::cout << "Normalized front distance: " << sts.front << " which is " << std::bitset<3>(sts.front) << std::endl;

    sts.rear = RearDistance / 150;
    std::cout << "Normalized rear distance: " << sts.rear << " which is " << std::bitset<3>(sts.rear) << std::endl;

    sts.right = RightDistance / 150;
    std::cout << "Normalized right distance: " << sts.right << " which is " << std::bitset<3>(sts.right) << std::endl;

    sts.left = LeftDistance / 150;
    std::cout << "Normalized left distance: " << sts.left << " which is " << std::bitset<3>(sts.left) << std::endl;

    uint16_t data;
    data = sts.speed << 12;
    data |= sts.front << 9;
    data |= sts.rear << 6;
    data |= sts.right << 3;
    data |= sts.left << 0;
    return data;
}

int main()
{
    uint16_t EncodedInfo = Encode(340, 300, 50, 195, 150);
    std::cout << std::bitset<16>(EncodedInfo) << std::endl;
    return 0;
}
