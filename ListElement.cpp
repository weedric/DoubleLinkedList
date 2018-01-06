//
// Created by Cedric on 06.01.2018.
//

#include <iostream>
#include "ListElement.hpp"



ListElement::ListElement(char *value) {
    this->previous = nullptr;
    this->next = nullptr;
    this->value = value;
}

void ListElement::setPrvious(ListElement *previous) {
    this->previous = previous;
}

void ListElement::setNext(ListElement *next) {
    this->next = next;
}

void ListElement::setValue(char *value) {
    this->value = value;
}

ListElement* ListElement::getNext() {
    return this->next;
}

ListElement* ListElement::getPrevious() {
    return this->previous;
}

char* ListElement::getValue() {
    return this->value;
}

bool ListElement::operator==(const ListElement &rhs) const {
    return value == rhs.value;
}

bool ListElement::operator!=(const ListElement &rhs) const {
    return !(rhs == *this);
}

ostream &operator<<(ostream &os, const ListElement &element) {
    return os << element.value;
}
