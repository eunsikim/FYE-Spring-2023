#include <iostream>

int main(){
    int rows;
    int cols;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of cols: ";
    std::cin >> cols;

    // Dynamic 2-D array
    int **arr2D = new int*[rows];
    for(int i = 0; i < rows; i++){
        arr2D[i] = new int[cols]; 
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            int temp;
            std::cout << "Enter a number: ";
            std::cin >> temp;
            arr2D[i][j] = temp;
            std::cout << "I added " << temp << " into arrayNum[" << i << "][" << j << "]" << std::endl;
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << i << " " << j << " " << arr2D[i][j] << std::endl;
        }
    }


    // Dynamic 1-D Array
    int *arr1D = new int[rows];
}