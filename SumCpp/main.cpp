//
//  main.cpp
//  SumCpp
//
//  Created by Hazem Elbaz on 3/2/19.
//  Copyright © 2019 Hazem Elbaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World! .. This Sum Cpp App !!!\n";
    
    int num1=0, num2=0, sum=0;
    
    cout << "Enter 1st num: ";
    cin >> num1;
    
    cout << "Enter 2nd num: ";
    cin >> num2;
    
    cout << "Sum = ";
    sum = num1 + num2 ;
    cout << sum;
    
    return 0;
}
