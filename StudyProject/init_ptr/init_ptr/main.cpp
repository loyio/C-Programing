//
//  main.cpp
//  init_ptr
//
//  Created by susmote on 2018/5/2.
//  Copyright © 2018年 susmote. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    int higgens = 5;
    int *pt = &higgens;
    
    cout << "Value of higgens  = " << higgens
    << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
    << "; Value of *pt = " << pt << endl;
    return 0;
}
