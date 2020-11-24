#include <iostream>
int NumOfLayers;
int row;
int col;
int number;
//using namespace std;

int main()
{
    std::cout << "Please enter the number of layers: " << std::endl;
    std::cin >> NumOfLayers;
    std::cout << "Please enter the row number: " << std::endl;
    std::cin >> row;
    std::cout << "Please enter the column number: " << std::endl;
    std::cin >> col;

    do
    {
        std::cout << "Please enter a positive number: " << std::endl;
        std::cin >> number;
        if (number <= 0 )
        {
            std::cout << "The number is not positive, please try again" << std::endl;
        }

    } while (number <= 0 );

    int ***array = new int **[NumOfLayers];
    for (int i = 0; i < NumOfLayers; i++){
        array[i] = new int *[row];
        for (int j = 0; j < row; j++) {

             array[i][j] = new int [col];
             for (int k = 0; k < col; k++) {
                array[i][j][k] = std::rand() % number;
              }
        }
    }

std::cout << "-----------------------" << std::endl;
std::cout << "The 3D array shown in layers is: " << std::endl;
    for (int i = 0; i < NumOfLayers; i++){
        for (int j = 0; j < row; j++){
            for (int k = 0; k < col; k++){
                std::cout << array[i][j][k] << " ";
            };
            std::cout << std::endl;
        };
        std::cout << std::endl;
    };
}
