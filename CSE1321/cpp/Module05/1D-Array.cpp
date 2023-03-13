#include <iostream>

int main(){
    int gradeArray[5];

    for(int i = 0; i < 5; i++){
        std::cout << "Enter grade " << i + 1 << ": ";
        std::cin >> gradeArray[i];
    }

    for(int i = 0; i < 5; i++){
        std::cout << gradeArray[i] << ", ";
    }

    for(int i = 0; i < 5; i++){
        std::cout << "Enter grade " << i + 1 << ": ";
        std::cin >> gradeArray[i];
    }

    for(int i = 0; i < 5; i++){
        std::cout << gradeArray[i] << ", ";
    }
}