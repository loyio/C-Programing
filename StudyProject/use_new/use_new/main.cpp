//
//  main.cpp
//  use_new
//
//  Created by susmote on 2018/5/2.
//  Copyright © 2018年 susmote. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    int nights = 1001;
    int * pt = new int;
    *pt = 1001;
    
    cout << "nights value = ";
    cout << nights << "; location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;
    double * pd = new double;
    *pd = 10000001.0;
    
    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << "; size of *pd = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << "; size of *pd = " << sizeof(*pd) << endl;
    return 0;
}
