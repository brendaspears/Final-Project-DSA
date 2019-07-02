//
// Created by Brenda Spears on 2019-06-30.
//

#ifndef ASTROLOGY_FUNCTION_H
#define ASTROLOGY_FUNCTION_H

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <fstream>
#include <vector>
#include "zodiacs.h"

class Function {

public:

    string str;

    void read(Zodiacs arr[],string url, int index);     // To Read the Text File (per line) and Store it in a vector

    void replace(string& str, const string& oldStr, const string& newStr);        // Function that replaces "*" to "\n" to make the informations into a neat paragraph

    void textFile(int zodiacIndex, int elementIndex);       // Output the final paragraph, after reading from text file, and making it neat through the "replace" function

};
#endif //ASTROLOGY_FUNCTION_H
