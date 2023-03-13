#include <iostream>

int main(){
    int arrayNum[3][2];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            int temp;
            std::cout << "Enter a number: ";
            std::cin >> temp;
            arrayNum[i][j] = temp;
            std::cout << "I added " << temp << " into arrayNum[" << i << "][" << j << "]" << std::endl;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            std::cout << i << " " << j << " " << arrayNum[i][j] << std::endl;
        }
    }
}