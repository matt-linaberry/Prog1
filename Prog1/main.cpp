//
//  main.cpp
//  Prog1
//
//  Created by Matthew Linaberry on 3/14/15.
//  Copyright (c) 2015 Matthew Linaberry. All rights reserved.
//
// This is for exercise 1.4 -- switch to a product!

#include <iostream>

int main() {
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2
    << " is " << v1 * v2 << std::endl;
    
    return 0;
}
