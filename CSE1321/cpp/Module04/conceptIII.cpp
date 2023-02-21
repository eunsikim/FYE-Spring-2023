//  Nested For Loops
#include <iostream>

using namespace std;

int main(){
    int iNum, jNum;
    cout << "How many i : ";
    cin >> iNum;

    cout << "How many j : ";
    cin >> jNum;

    for(int i = 0; i < iNum; i++){
        cout << "i = " << i << endl;
        for(int j = 0; j < jNum; j++){
            cout << "\tj= " << j << " ";
        }
        cout << endl;
    }
}
