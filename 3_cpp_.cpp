// for using while, make the sum from 50 to 100

#include <iostream>

int main(){
    int val = 50,sum=0;
    while (val<=100){
        sum += val;
        ++val;
    }
    printf("%d\t%d",sum,val);
    return 0;
}   
