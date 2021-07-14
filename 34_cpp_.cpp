#include <iostream>

using namespace std;

int main(void) {
    while (1){
        int num1, num2; 
        cin >> num1 >> num2;
        if( cin.eof() ){
            break;
        }
        cout << num1+num2 << "\n";
    }
}
