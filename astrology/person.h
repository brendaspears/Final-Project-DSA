//
// Created by Brenda Spears on 2019-06-30.
//

#ifndef ASTROLOGY_PERSON_H
#define ASTROLOGY_PERSON_H

#include "node.h"

class Person {

protected:

    Node *head, *tail, *current;       //Node pointers to head and tail

public:

    Person(){
        head = NULL;
        tail = NULL;
        current = NULL;
    }

    int location(string name);      // Returns the index location of "Person"

    int count();        // Counts the number of nodes created

    bool checkName(string a);       // Validates the name

    string sunSign(string day1, string month1);     // Calculate the astrological sign for the "Person" and outputs its description and created symbol

    bool isValid(string day, string month);     // Validates the month and date

    void add(string a, string b, string c);     // Add new "person" to the list

    string signName(string name);       // Returns the zodiac of the "person" given

    bool search(string name);       // Search if the "Person" is present

    void edit(string name);     // Edit the list (name , date, month, zodiac)

    void view();        // View the list

    void del(string name);      // Delete "Person" from the linked list

};

#endif //ASTROLOGY_PERSON_H
