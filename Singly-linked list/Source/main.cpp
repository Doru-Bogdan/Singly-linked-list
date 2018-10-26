//
//  main.cpp
//  Lab-2
//
//  Created by Doru Mancila on 26/10/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include <iostream>
#include <chrono>
#include "class_define.hpp"


int main() {
    List c;
    //c.print();
    c.insertPos(c.count, 210);
    c.insertPos(c.count, 310);
    c.insertPos(c.count, 410);
    c.insertPos(c.count, 510);
    c.insertPos(c.count, 610);
    c.insertPos(c.count, 710);
    c.insertPos(c.count, 810);
    c.insertPos(c.count, 410);
    c.insertPos(c.count, 510);
    c.insertLast(910);
    c.insertFirst(100);
    c.print();
    //c.deleteByValue(410);
    //std::cout << "\n";
    //auto start = std::chrono::high_resolution_clock::now();
    //c.reverse1();
    //auto stop = std::chrono::high_resolution_clock::now();
    //auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
    //std::cout << (double)duration.count() << "\n";
    //start = std::chrono::high_resolution_clock::now();
    //c.reverse2();
    //stop = std::chrono::high_resolution_clock::now();
    //duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
    //std::cout << (double)duration.count() << "\n";
    return 0;
}
