#include <iostream>

int main(){
    int CurrVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (std::cin>> CurrVal){
        int cnt = 1; // store the count for current value we're processing 

        while (std::cin >> val) { // read the remaining numbers 
            if (val == CurrVal) 
                ++cnt;
            else {  // otherwise, print the count for the previous value 
                    std::cout << CurrVal << " occurs "
                    << cnt << " times " << std::endl; 
                    CurrVal = val; // remember the new value 
                    cnt = 1; // reset the counter
            }
        } // while loop ends here
        std::cout << CurrVal << " Occurs " << cnt << " times " << std::endl;
        return 0;
    }

}
