//
//  main.cpp
//  address
//
//  Created by susmote on 2018/5/1.
//  Copyright © 2018年 susmote. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    int donuts = 6;
    double cups = 4.5;
    
    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
    
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    return 0;
}
