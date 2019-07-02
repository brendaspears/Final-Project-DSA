//
// Created by Brenda Spears on 2019-06-30.
//

#include "person.h"

using namespace std;

int Person :: location(string name)
{
    int loc = 1;
    Node* temp = head;
    while (temp!=NULL){
        if ( temp -> name == name){
            return loc;
        }
        else{
            loc++;
        }
        temp = temp -> next;
    }
    return 0;
}

int Person :: count()
{
    Node * tempHead = head;
    int counter = 0;
    while (tempHead!=NULL)
    {
        tempHead = tempHead->next;
        counter++;
    }
    return counter;
}

bool Person :: checkName(string a)
{
    bool answer = false;
    for (int i = 0; i < a.size(); i++) {
        if (isalpha(a[i]) || a[i] == ' ') {
            answer = true;
        } else {
            cout << " ~~>  Name Should be All Letters or Space" << endl << endl;
            cout << " ~~>  Input Proper Name!" << endl << endl;
            answer = false;
            break;
        }
    }
    return answer;
}

string Person :: sunSign(string day1, string month1)
{
    string bday=day1, bmonth=month1;
    string sun_sign="";
    int day = stoi(bday);
    int month = stoi(bmonth);

    if (month == 1){
        if (day < 20) {
            sun_sign = "Capricorn";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                             C A P R I C O R N                              ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE GOAT                                                              ||>" << endl;
            cout << "<|| Capricorn’s are also philosophical signs and are highly intelligent too.   ||>\n"
                    "<|| They are good organizers, and they achieve their goals by purposeful,      ||>\n"
                    "<|| systematic means.                                                          ||>" << endl;
            cout << "<||   _   _                                                                    ||>" << endl;
            cout << "<||  ' \\ / |                                                                   ||>" << endl;
            cout << "<||     |  '.-.    <~~ Astrological Symbol                                     ||>" << endl;
            cout << "<||        '._.'                                                               ||>" << endl;
            cout << "<||     ._.'                                                                   ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
        else {
            sun_sign = "Aquarius";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                               A Q U A R I U S                              ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE WATER BEARER                                                      ||>" << endl;
            cout << "<|| Aquarian’s will take up any cause, and are humanitarians of the zodiac.    ||>\n"
                    "<|| They are honest, loyal and highly intelligent.                             ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<||  ..-\"-..-\"-..-    <~~ Astrological Symbol                                  ||>" << endl;
            cout << "<||  ..-\"-..-\"-..-                                                             ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
    }

    else if (month == 12){

        if (day < 22) {
            sun_sign = "Sagittarius";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                           S A G I T T A R I U S                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE ARCHER                                                            ||>" << endl;
            cout << "<|| They have great ability for focus, and can be very intense. They are not   ||>\n"
                    "<|| very patient and expect quick results.                                     ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<||         ...                                                                ||>" << endl;
            cout << "<||         .':                                                                ||>" << endl;
            cout << "<||       .'       <~~ Astrological Symbol                                      ||>" << endl;
            cout << "<||   `..'                                                                     ||>" << endl;
            cout << "<||   .'`.                                                                     ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;

        }
        else {
            sun_sign = "Capricorn";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                             C A P R I C O R N                              ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE GOAT                                                              ||>" << endl;
            cout << "<|| Capricorn’s are also philosophical signs and are highly intelligent too.   ||>\n"
                    "<|| They are good organizers, and they achieve their goals by purposeful,      ||>\n"
                    "<|| systematic means.                                                          ||>" << endl;
            cout << "<||   _   _                                                                    ||>" << endl;
            cout << "<||  ' \\ / |                                                                   ||>" << endl;
            cout << "<||     |  '.-.    <~~ Astrological Symbol                                     ||>" << endl;
            cout << "<||        '._.'                                                               ||>" << endl;
            cout << "<||     ._.'                                                                   ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
    }

    else if (month == 2){
        if (day < 19) {
            sun_sign = "Aquarius";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                               A Q U A R I U S                              ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE WATER BEARER                                                      ||>" << endl;
            cout << "<|| Aquarian’s will take up any cause, and are humanitarians of the zodiac.    ||>\n"
                    "<|| They are honest, loyal and highly intelligent.                             ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<||  ..-\"-..-\"-..-    <~~ Astrological Symbol                                  ||>" << endl;
            cout << "<||  ..-\"-..-\"-..-                                                             ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
        else {
            sun_sign = "Pisces";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                P I S C E S                                 ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE FISH                                                              ||>" << endl;
            cout << "<|| They are honest, unselfish, trustworthy and often have quiet dispositions. ||>\n"
                    "<|| They can be overcautious and sometimes gullible.                           ||>\n"
                    "<||                                                                            ||>" << endl;
            cout << "<||  `-.  .-'                                                                  ||>" << endl;
            cout << "<||    :  :                                                                    ||>" << endl;
            cout << "<||  --:--:--     <~~ Astrological Symbol                                      ||>" << endl;
            cout << "<||    :  :                                                                    ||>" << endl;
            cout << "<||  .-`   `-.                                                                 ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
    }

    else if(month == 3) {
        if (day < 21) {
            sun_sign = "Pisces";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                P I S C E S                                 ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl
                 << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE FISH                                                              ||>" << endl;
            cout << "<|| They are honest, unselfish, trustworthy and often have quiet dispositions. ||>\n"
                    "<|| They can be overcautious and sometimes gullible.                           ||>\n"
                    "<||                                                                            ||>" << endl;
            cout << "<||  `-.  .-'                                                                  ||>" << endl;
            cout << "<||    :  :                                                                    ||>" << endl;
            cout << "<||  --:--:--     <~~ Astrological Symbol                                      ||>" << endl;
            cout << "<||    :  :                                                                    ||>" << endl;
            cout << "<||  .-`   `-.                                                                 ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
        else {
            sun_sign = "Aries";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                 A R I E S                                  ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl
                 << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE RAM                                                               ||>" << endl;
            cout << "<|| Aries people are creative, adaptive, and insightful. Aries are fire signs, ||>\n"
                    "<|| and so too is their personality.                                           ||>\n"
                    "<||                                                                            ||>" << endl;
            cout << "<||   .-.   .-.                                                                ||>" << endl;
            cout << "<||  (_  \\ /  _)    <~~ Astrological Symbol                                    ||>" << endl;
            cout << "<||       |                                                                    ||>" << endl;
            cout << "<||       |                                                                    ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
    }
    else if (month == 4){
        if (day < 20) {
            sun_sign = "Aries";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                 A R I E S                                  ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE RAM                                                               ||>" << endl;
            cout << "<|| Aries people are creative, adaptive, and insightful. Aries are fire signs, ||>\n"
                    "<|| and so too is their personality.                                           ||>\n"
                    "<||                                                                            ||>" << endl;
            cout << "<||   .-.   .-.                                                                ||>" << endl;
            cout << "<||  (_  \\ /  _)    <~~ Astrological Symbol                                    ||>" << endl;
            cout << "<||       |                                                                    ||>" << endl;
            cout << "<||       |                                                                    ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
        else {
            sun_sign = "Taurus";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                T A U R U S                                 ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE BULL                                                              ||>" << endl;
            cout << "<|| Stubborn by nature, the Taurus will stand his/her ground to the bitter end.||>\n"
                    "<|| But that’s okay because the Taurus is also a loving, sympathetic and       ||>\n"
                    "<|| appreciative sign.                                                         ||>\n"
                    "<||                                                                            ||>" << endl;
            cout << "<||   .     .                                                                  ||>" << endl;
            cout << "<||   '.___.'                                                                  ||>" << endl;
            cout << "<||   .'   `.                                                                  ||>" << endl;
            cout << "<||  :       :    <~~ Astrological Symbol                                      ||>" << endl;
            cout << "<||  :       :                                                                 ||>" << endl;
            cout << "<||   `.___.'                                                                  ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
    }
    else if (month == 5){
        if (day < 21) {
            sun_sign = "Taurus";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                T A U R U S                                 ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE BULL                                                              ||>" << endl;
            cout << "<|| Stubborn by nature, the Taurus will stand his/her ground to the bitter end.||>\n"
                    "<|| But that’s okay because the Taurus is also a loving, sympathetic and       ||>\n"
                    "<|| appreciative sign.                                                         ||>\n"
                    "<||                                                                            ||>" << endl;
            cout << "<||   .     .                                                                  ||>" << endl;
            cout << "<||   '.___.'                                                                  ||>" << endl;
            cout << "<||   .'   `.                                                                  ||>" << endl;
            cout << "<||  :       :    <~~ Astrological Symbol                                      ||>" << endl;
            cout << "<||  :       :                                                                 ||>" << endl;
            cout << "<||   `.___.'                                                                  ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
        else {
            sun_sign = "Gemini";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                G E M I N I                                 ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE TWINS                                                             ||>" << endl;
            cout << "<|| Flexibility, balance and adaptability are the keywords for the Gemini.     ||>\n"
                    "<|| They tend to have a duality to their nature, and can sometimes be tough to ||>\n"
                    "<|| predict how they will react.                                               ||>\n"
                    "<||                                                                            ||>" << endl;
            cout << "<||  ._____.                                                                   ||>"<< endl;
            cout << "<||    | |                                                                     ||>" << endl;
            cout << "<||    | |      <~~ Astrological Symbol                                        ||>" << endl;
            cout << "<||    | |                                                                     ||>" << endl;
            cout << "<||   _|_|_                                                                    ||>" << endl;
            cout << "<||  '     `                                                                   ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
    }

    else if( month == 6){
        if (day < 21) {
            sun_sign = "Gemini";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                G E M I N I                                 ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE TWINS                                                             ||>" << endl;
            cout << "<|| Flexibility, balance and adaptability are the keywords for the Gemini.     ||>\n"
                    "<|| They tend to have a duality to their nature, and can sometimes be tough to ||>\n"
                    "<|| predict how they will react.                                               ||>\n"
                    "<||                                                                            ||>" << endl;
            cout << "<||  ._____.                                                                   ||>"<< endl;
            cout << "<||    | |                                                                     ||>" << endl;
            cout << "<||    | |      <~~ Astrological Symbol                                        ||>" << endl;
            cout << "<||    | |                                                                     ||>" << endl;
            cout << "<||   _|_|_                                                                    ||>" << endl;
            cout << "<||  '     `                                                                   ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
        else {
            sun_sign = "Cancer";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                C A N C E R                                 ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE CRAB                                                              ||>" << endl;
            cout << "<|| Cancerians love home-life, family and domestic settings. They are          ||>\n"
                    "<|| traditionalists, and enjoy operating on a fundamental level.               ||>\n"
                    "<||                                                                            ||>" << endl;
            cout << "<||     .---.                                                                  ||>"<< endl;
            cout << "<||    /    _`.                                                                ||>" << endl;
            cout << "<||   (_)  ( )     <~~ Astrological Symbol                                     ||>" << endl;
            cout << "<||  '.     /                                                                  ||>" << endl;
            cout << "<||    `---'                                                                   ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
    }

    else if (month == 7){
        if (day < 23) {
            sun_sign = "Cancer";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                C A N C E R                                 ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE CRAB                                                              ||>" << endl;
            cout << "<|| Cancerians love home-life, family and domestic settings. They are          ||>\n"
                    "<|| traditionalists, and enjoy operating on a fundamental level.               ||>\n"
                    "<||                                                                            ||>" << endl;
            cout << "<||     .---.                                                                  ||>"<< endl;
            cout << "<||    /    _`.                                                                ||>" << endl;
            cout << "<||   (_)  ( )     <~~ Astrological Symbol                                     ||>" << endl;
            cout << "<||  '.     /                                                                  ||>" << endl;
            cout << "<||    `---'                                                                   ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
        else {
            sun_sign = "Leo";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                   L E O                                    ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE LION                                                              ||>" << endl;
            cout << "<|| The zodiac signs and meanings of Leo is about expanse, power and,          ||>\n"
                    "<|| exuberance. Leo’s are natural born leaders, and have a tendency to be      ||>\n"
                    "<|| high-minded and vocal about their opinions.                                ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<||    .--.                                                                    ||>" << endl;
            cout << "<||   (    )    <~~ Astrological Symbol                                        ||>" << endl;
            cout << "<||  (_)  /                                                                    ||>"<< endl;
            cout << "<||      (_,                                                                   ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
    }

    else if( month == 8){
        if (day < 23) {
            sun_sign = "Leo";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                   L E O                                    ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE LION                                                              ||>" << endl;
            cout << "<|| The zodiac signs and meanings of Leo is about expanse, power and,          ||>\n"
                    "<|| exuberance. Leo’s are natural born leaders, and have a tendency to be      ||>\n"
                    "<|| high-minded and vocal about their opinions.                                ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<||    .--.                                                                    ||>" << endl;
            cout << "<||   (    )    <~~ Astrological Symbol                                        ||>" << endl;
            cout << "<||  (_)  /                                                                    ||>"<< endl;
            cout << "<||      (_,                                                                   ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
        else {
            sun_sign = "Virgo";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                 V I R G O                                  ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE VIRGIN                                                            ||>" << endl;
            cout << "<|| Virgo’s have keen minds, and are delightful to talk with, often convincing ||>\n"
                    "<|| others of outlandish tales with ease and charm. Virgo’s are inquisitive    ||>\n"
                    "<|| and are very skilled at drawing information from people.                   ||>\n"
                    "<||   _                                                                        ||>" << endl;
            cout << "<||  ' `:--.--.                                                                ||>" << endl;
            cout << "<||     |  |  |_                                                               ||>" << endl;
            cout << "<||     |  |  | )    <~~ Astrological Symbol                                   ||>" << endl;
            cout << "<||     |  |  |/                                                               ||>" << endl;
            cout << "<||           (J                                                               ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
    }

    else if (month == 9){
        if (day < 23) {
            sun_sign = "Virgo";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                 V I R G O                                  ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE VIRGIN                                                            ||>" << endl;
            cout << "<|| Virgo’s have keen minds, and are delightful to talk with, often convincing ||>\n"
                    "<|| others of outlandish tales with ease and charm. Virgo’s are inquisitive    ||>\n"
                    "<|| and are very skilled at drawing information from people.                   ||>\n"
                    "<||   _                                                                        ||>" << endl;
            cout << "<||  ' `:--.--.                                                                ||>" << endl;
            cout << "<||     |  |  |_                                                               ||>" << endl;
            cout << "<||     |  |  | )    <~~ Astrological Symbol                                   ||>" << endl;
            cout << "<||     |  |  |/                                                               ||>" << endl;
            cout << "<||           (J                                                               ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
        else {
            sun_sign = "Libra";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                 L I B R A                                  ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE SCALES                                                            ||>" << endl;
            cout << "<|| As their zodiac signs and meanings would indicate, Libra’s are all about   ||>\n"
                    "<|| balance, justice, equanimity and stability. Libra’s are very understanding,||>\n"
                    "<|| caring, and often the champion of underdogs.                               ||>\n"
                    "<||                                                                            ||>" << endl;
            cout << "<||      .- -.                                                                 ||>" << endl;
            cout << "<||     :     :                                                                ||>" << endl;
            cout << "<||  ___'.   .'___    <~~ Astrological Symbol                                  ||>" << endl;
            cout << "<||  _____________                                                             ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
    }

    else if (month == 10){
        if (day < 23) {
            sun_sign = "Libra";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                 L I B R A                                  ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE SCALES                                                            ||>" << endl;
            cout << "<|| As their zodiac signs and meanings would indicate, Libra’s are all about   ||>\n"
                    "<|| balance, justice, equanimity and stability. Libra’s are very understanding,||>\n"
                    "<|| caring, and often the champion of underdogs.                               ||>\n"
                    "<||                                                                            ||>" << endl;
            cout << "<||      .- -.                                                                 ||>" << endl;
            cout << "<||     :     :                                                                ||>" << endl;
            cout << "<||  ___'.   .'___    <~~ Astrological Symbol                                  ||>" << endl;
            cout << "<||  _____________                                                             ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
        else {
            sun_sign = "Scorpio";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                               S C O R P I O                                ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE SCORPION                                                          ||>" << endl;
            cout << "<|| Scorpio is often misunderstood. These personalities are bold and are       ||>\n"
                    "<|| capable of executing massive enterprises with cool control and confidence. ||>" << endl;
            cout << "<||   _                                                                        ||>" << endl;
            cout << "<||  ' `:--.--.                                                                ||>" << endl;
            cout << "<||     |  |  |                                                                ||>" << endl;
            cout << "<||     |  |  |         <~~ Astrological Symbol                                ||>" << endl;
            cout << "<||     |  |  |  ..,                                                           ||>" << endl;
            cout << "<||           `---':                                                           ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
    }

    else if (month == 11){
        if (day < 22) {
            sun_sign = "Scorpio";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                               S C O R P I O                                ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE SCORPION                                                          ||>" << endl;
            cout << "<|| Scorpio is often misunderstood. These personalities are bold and are       ||>\n"
                    "<|| capable of executing massive enterprises with cool control and confidence. ||>" << endl;
            cout << "<||   _                                                                        ||>" << endl;
            cout << "<||  ' `:--.--.                                                                ||>" << endl;
            cout << "<||     |  |  |                                                                ||>" << endl;
            cout << "<||     |  |  |         <~~ Astrological Symbol                                ||>" << endl;
            cout << "<||     |  |  |  ..,                                                           ||>" << endl;
            cout << "<||           `---':                                                           ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }
        else {
            sun_sign = "Sagittarius";
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                           S A G I T T A R I U S                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<|| ~~>  THE ARCHER                                                            ||>" << endl;
            cout << "<|| They have great ability for focus, and can be very intense. They are not   ||>\n"
                    "<|| very patient and expect quick results.                                     ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << "<||         ...                                                                ||>" << endl;
            cout << "<||         .':                                                                ||>" << endl;
            cout << "<||       .'       <~~ Astrological Symbol                                      ||>" << endl;
            cout << "<||   `..'                                                                     ||>" << endl;
            cout << "<||   .'`.                                                                     ||>" << endl;
            cout << "<||                                                                            ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%%~%~%~%~%~%" << endl << endl;
        }

    }

    return sun_sign;

}

bool Person :: isValid(string day, string month) {
    string bday = day, bmonth = month;
    for (int i = 0; i < bday.size(); i++) {
        if (isdigit(bday[i])) {
            for (int i = 0; i < bmonth.size(); i++) {
                if (isdigit(bmonth[i])) {
                    int day = stoi(bday);
                    int month = stoi(bmonth);
                    if (month < 0 || month > 12) {
                        cout << " ~~> Month is Out Of Range!" << endl << endl;
                        cout << " ~~>  Re-enter Month!" << endl << endl;
                        return false;
                    } else if (month == 2) {

                        if (day > 0 && day <= 29) {
                            return true;
                        } else {
                            cout << " ~~>  Date is Out Of Range!" << endl << endl;
                            cout << " ~~>  Re-enter Date!" << endl << endl;
                            return false;
                        }

                    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 ||
                               month == 12) {
                        if (day > 0 && day <= 31) {
                            return true;
                        } else {
                            cout << " ~~>  Date is Out Of Range!" << endl << endl;
                            cout << " ~~>  Re-enter Date!" << endl << endl;
                            return false;
                        }
                    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                        if (day > 0 && day <= 30) {
                            return true;
                        } else {
                            cout << " ~~>  Date is Out Of Range!" << endl << endl;
                            cout << " ~~>  Re-enter Date!" << endl << endl;
                            return false;
                        }
                    }

                } else {
                    cout << " ~~>  Month Should Be Numbers Only!" << endl << endl;
                    return false;
                }
            }
        } else {
            cout << " ~~>  Date Should Be Numbers Only!" << endl << endl;
            return false;
        }
    }
}



void Person :: add(string a, string b, string c)
{
    if (checkName(a) and isValid(b,c)) {
        Node* temp = head;
        string d = sunSign(b, c);
        if (temp == NULL){
            current = new Node;
            current->name = a;
            current->day = b;
            current->month = c;
            current->zodiac = d;
            current->next = tail;

            head = current;
            tail = head;

        }
        else if (temp != NULL){
            current = new Node;
            current->name = a;
            current->day = b;
            current->month = c;
            current->zodiac = d;
            tail->next = current;

            tail = current;
        }

    }

}

string Person :: signName(string name){
    Node* temp = head;
    while (temp!=NULL){
        if ( temp -> name == name){
            return temp -> zodiac;
        }
        temp = temp -> next;
    }
}


bool Person :: search(string name)
{
    bool answer = false;
    Node* temp = head;
    while (temp!=NULL){
        if ( temp -> name == name){
            answer = true;
            break;
        }
        temp = temp -> next;
    }
    return answer;
}


void Person :: edit(string name)
{
    bool answer;
    int choice;
    string newName, newDate, newMonth;
    answer = search(name);
    if (answer == true) {
        cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
        cout << "<||            E D I T            ||>" << endl;
        cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
        cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
        cout << "<|| 1.   Name                     ||>" << endl;
        cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
        cout << "<|| 2.   Birth Date               ||>" << endl;
        cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
        cout << "<|| 3.   Birth Month              ||>" << endl;
        cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
        cout << " ~~>  Enter Choice: ";
        cin >> choice;
        cout << endl;
        if (choice == 1) {
            cout << " ~~>  Enter New Name: ";
            cin >> newName;
            cout << endl;
            Node* temp = head;
            while (temp!=NULL){
                if (temp -> name == name){
                    temp -> name = newName;
                }
                temp = temp -> next;
            }
        }

        else if (choice == 2) {
            cout << " ~~>  Enter New Birth Date: ";
            cin >> newDate;
            cout << endl;
            Node* temp = head;
            while (temp!=NULL){
                if (temp -> name == name){
                    temp -> day = newDate;
                    string newZodiac = sunSign(newDate, temp -> month);
                    temp -> zodiac = newZodiac;

                }
                temp = temp -> next;
            }

        }

        else if (choice == 3) {
            cout << " ~~>  Enter New Birth Month: ";
            cin >> newMonth;
            cout << endl;
            Node* temp = head;
            while (temp!=NULL){
                if (temp -> name == name){
                    temp -> month = newMonth;
                    string newZodiac = sunSign(temp -> day, newMonth);
                    temp -> zodiac = newZodiac;
                }
                temp = temp -> next;
            }
        }
    }
    else{
        cout << " ~~>  Not Found!" << endl << endl;
    }
}

void Person :: view()
{
    Node* temp = head;
    cout << "    %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "   <||            L I S T            ||>" << endl;
    cout << "    %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << " __________________________________________" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~" << endl;
    cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << endl;
    while (temp!=NULL) {
        cout << " ~~>  Name: " << temp -> name << endl;
        cout << " ~~>  Birth Date: " << temp -> day << endl;
        cout << " ~~>  Birth Month: " << temp -> month << endl;
        cout << " ~~>  Zodiac: " << temp -> zodiac << endl;
        cout << " __________________________________________" << endl;
        cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~" << endl;
        cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << endl;
        temp = temp -> next;
    }
    cout << endl;
}
void Person :: del(string name)
{
    bool ans = search(name);
    if (ans == true){
        int loc = location(name);
        if (loc==1){
            Node *temp;
            temp=head;
            head=head->next;
            delete temp;
        }
        else if (loc == count()){
            Node *current;
            Node *previous=new Node;
            current=head;
            while(current->next!=NULL)
            {
                previous=current;
                current=current->next;
            }
            tail=previous;
            previous->next=NULL;
            delete current;
        }
        else {
            Node *current;
            Node *previous = new Node;
            current = head;
            for (int i = 1; i < loc; i++) {
                previous = current;
                current = current->next;
            }
            previous->next = current->next;
        }
    }
    else{
        cout << " ~~>  Not Found!" << endl << endl;
    }
}
