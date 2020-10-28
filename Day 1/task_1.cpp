#include <iostream>

int number;
int array [8][9][11];

int main(){

    do{
        std::cout << "Provide positive number: " << std::endl;
        std::cin >> number;

        if(number<=0){
            std::cout << "Your number is not positive, please try again" << std::endl;
        }

    }while(number<=0);

    for(int i=0; i<8; i++){
        for(int j=0; j<9; j++){
            for(int k=0; k<11; k++){
                array [i][j][k] = std::rand() % number;
            };
        };
    };

    for(int i=0; i<8; i++){
        for(int j=0; j<9; j++){
            for(int k=0; k<11; k++){
                std::cout << array [i][j][k] << " " ;
            };
            std::cout << std::endl;
        };
        std::cout << std::endl;
    };






}
