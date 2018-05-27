//
//  main.cpp
//  pointer
//
//  Created by susmote on 2018/5/1.
//  Copyright © 2018年 susmote. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    int updates = 6;
    int * p_updates;
    p_updates = &updates;
    
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = "  << *p_updates << endl;
    
    cout << "Addresses : &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
    
    *p_updates = *p_updates + 1;
    cout << "Now updates =  " << updates << endl;
    
    return 0;
}
