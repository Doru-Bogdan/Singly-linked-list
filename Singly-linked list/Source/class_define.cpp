//
//  class_define.cpp
//  Lab-2
//
//  Created by Doru Mancila on 26/10/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "class_define.hpp"
#include <iostream>

void List::print() {
    Node* temp = head;
    while (temp != NULL) {
        std::cout << temp->info << " ";
        temp = temp->next;
    }
    std::cout << "\n";
}

int List::getElement(int poz) {
    Node* temp = head;
    int i = 0;
    while (i < poz && temp->next != NULL) {
        temp = temp->next;
        i++;
    }
    return temp->info;
}

void List::insertLast(int val) {
    insertPos(count, val);
}

void List::insertFirst(int val) {
    Node* newNode = new Node;
    newNode->info = val;
    newNode->next = head;
    head = newNode;
}

void List::insertPos(int k, int val) {
    Node* newNode = new Node;
    newNode->info = val;
    newNode->next = NULL;
    Node* temp = head;
    if(head == NULL) {
        head = newNode;
        count++;
        return;
    }
    int i = 0;
    while (temp != NULL && i < k - 1) {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    count++;
}

void List::deleteByValue(int val) {
    if(head == NULL)
        return;
    Node* temp = head;
    while (temp->next != NULL && temp->next->info != val) {
        temp = temp->next;
    }
    Node* elemDel = temp->next;
    temp->next = temp->next->next;
    delete elemDel;
}

void List::reverse1() {
    Node *a, *b, *c;
    a = head;
    if (count == 1) {
        std::cout << "Lista cu un singur element" << "\n";
        return;
    }
    if (count == 2) {
        b = a->next;
        a->next = NULL;
        b->next = a;
        head = b;
        return;
    }
    b = a->next;
    c = b->next;
    a->next = NULL;
    b->next = a;
    while (1) {
        if(c->next == NULL) {
            c->next = b;
            head = c;
            return;
        }
        a = c->next;
        c->next = b;
        if(a->next != NULL && a->next->next != NULL) {
            b = a->next;
            a->next = c;
            c = b->next;
            b->next = a;
        }
        else if(a->next == NULL) {
            a->next = c;
            head = a;
            return;
        }
        else {
            b = a->next;
            a->next = c;
            b->next = a;
            head = b;
            return;
        }
    }
}

void List::reverse2() {
    Node *a, *b, *c;
    if (count == 1) {
        std::cout << "Lista cu un singur element" << "\n";
        return;
    }
    if (count == 2) {
        a = head;
        b = a->next;
        a->next = NULL;
        b->next = a;
        head = b;
        return;
    }
    a = head;
    b = a->next;
    c = b->next;
    a->next = NULL;
    b->next = a;
    head = b;
    while (c != NULL) {
        a = b;
        b = c;
        c = c->next;
        head = b;
        b->next = a;
    }
}

List::List() {
    head = NULL;
}

List::~List() {
    Node *temp, *elemDel;
    temp = head;
    while (temp->next != NULL) {
        elemDel = temp;
        temp = temp->next;
        delete elemDel;
    }
}
