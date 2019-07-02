//
// Created by Brenda Spears on 2019-06-30.
//

#include "function.h"

using namespace std;

void Function :: read(Zodiacs arr[],string url, int index){
    ifstream in;
    in.open(url);
    while (getline(in, str)) {
        if (str.size() > 0)
            arr[index].element.emplace_back(str);
    }
    in.close();
}

void Function :: replace(string& str, const string& oldStr, const string& newStr)
{   string::size_type pos = 0u;
    while ((pos = str.find(oldStr, pos)) != string::npos) {
        str.replace(pos, oldStr.length(), newStr);
        pos += newStr.length();
    }
}

void Function :: textFile(int zodiacIndex, int elementIndex){
    Zodiacs arr[12];
    read(arr, "/Users/brenda/CLionProjects/astrology/aries.txt", 0);
    read(arr, "/Users/brenda/CLionProjects/astrology/taurus.txt", 1);
    read(arr, "/Users/brenda/CLionProjects/astrology/gemini.txt", 2);
    read(arr, "/Users/brenda/CLionProjects/astrology/cancer.txt", 3);
    read(arr, "/Users/brenda/CLionProjects/astrology/leo.txt", 4);
    read(arr, "/Users/brenda/CLionProjects/astrology/virgo.txt", 5);
    read(arr, "/Users/brenda/CLionProjects/astrology/libra.txt", 6);
    read(arr, "/Users/brenda/CLionProjects/astrology/scorpio.txt", 7);
    read(arr, "/Users/brenda/CLionProjects/astrology/sagittarius.txt", 8);
    read(arr, "/Users/brenda/CLionProjects/astrology/capricorn.txt", 9);
    read(arr, "/Users/brenda/CLionProjects/astrology/aquarius.txt", 10);
    read(arr, "/Users/brenda/CLionProjects/astrology/pisces.txt", 11);
    string strr = arr[zodiacIndex].element[elementIndex];
    replace(strr,"*","\n");
    cout << "%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
    cout << strr << endl;
    cout << "%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
}