//
//  class_define.hpp
//  Lab-2
//
//  Created by Doru Mancila on 26/10/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

struct Node {
    int info;
    Node* next;
};

class List {
private:
    Node *head;
public:
    int count = 0;
public:
    List();
    ~List();
    int getElement(int);
    void insertPos(int, int);
    void insertLast(int);
    void insertFirst(int);
    void deleteByValue(int);
    void reverse1();
    void reverse2();
    void print();
};
