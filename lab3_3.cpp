#include <iostream>
using namespace std;

int main (){  
    double x=2,sum=0;
    while(x < 70){
        sum += 1/x;
        x=x+1; 
    }
    cout << "sum is " << sum;
    
    return 0;
}