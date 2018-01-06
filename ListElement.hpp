//
// Created by Cedric on 06.01.2018.
//

#ifndef DOUBLELINKEDLIST_LISTELEMENT_HPP
#define DOUBLELINKEDLIST_LISTELEMENT_HPP
#endif

#include <string>
#include <ostream>

using namespace std;

class ListElement {
public:
//    template <typename T>
//    ListElement(T value);
    ~ListElement() = default;
    explicit ListElement(string value);
    void setNext(ListElement *next);
    void setPrvious(ListElement *previous);
    void setValue(string value);
    ListElement* getNext();
    ListElement* getPrevious();
    string getValue();

    //operators
    bool operator==(const ListElement &rhs) const;
    bool operator!=(const ListElement &rhs) const;
    friend ostream &operator<<(ostream &os, const ListElement &element);

protected:
private:
    ListElement *next;
    ListElement *previous;
//    template <typename T>
//    T value;
    string value;
};
