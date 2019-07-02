//
// Created by Brenda Spears on 2019-06-30.
//

#ifndef ASTROLOGY_NODE_H
#define ASTROLOGY_NODE_H

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <fstream>
#include <vector>

using namespace std;


struct Node{

    string name , day, month, zodiac;

    Node *next;

};

#endif //ASTROLOGY_NODE_H
