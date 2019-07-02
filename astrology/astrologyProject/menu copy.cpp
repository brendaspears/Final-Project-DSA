//
// Created by Brenda Spears on 2019-06-30.
//

#include "menu.h"

using namespace std;

void Menu :: menu() {
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<||         W E L C O M E         ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 1.   Add a Person             ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 2.   Remove a Person          ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 3.   View List                ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 4.   Edit List                ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 5.   Astrology                ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 6.   Exit                     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
    cout << " ~~>  Enter Choice: ";
}

void Menu :: menuAstrology(){
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<||       A S T R O L O G Y       ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 1.   Trivia                   ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 2.   Personality              ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 3.   Love                     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 4.   Friendship               ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 5.   Change Person            ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 6.   Back                     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 7.   Exit                     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
    cout << " ~~>  Enter Choice: ";
}

void Menu :: menuTrivia(){
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<||          T R I V I A          ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 1.   Elements                 ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 2.   Flowers                  ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 3.   Gemstones                ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 4.   Ruling Planets           ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 5.   Colors                   ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 6.   Tarot Cards              ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 7.   Ruling House             ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 8.   Celebrities (same sign)  ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 9.   Back                     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 10.  Exit                     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
    cout << " ~~>  Enter Choice: ";
}

void Menu :: menuPersonality(){
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<||     P E R S O N A L I T Y     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 1.   Positive Traits          ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 2.   Negative Traits          ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 3.   Pet Peeve                ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 4.   What Saddens you         ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 5.   Fear & Insecurity        ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 6.   Jealousy                 ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 7.   Advice                   ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 8.   Back                     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 9.   Exit                     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
    cout << " ~~>  Enter Choice: ";
}

void Menu :: menuLove(){
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<||            L O V E            ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 1.   Best Matches             ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 2.   Worst Matches            ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 3.   Signs as Lovers          ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 4.   Compatibilty             ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 5.   Break Up Advice          ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 6.   Back                     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 7.   Exit                     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
    cout << " ~~>  Enter Choice: ";
}

void Menu :: menuFriendship(){
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<||       F R I E N D S H I P     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 1.   Signs as Friends         ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 2.   Compatibility            ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 3.   Worst Friendship         ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 4.   Best Friendship          ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 5.   Back                     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
    cout << "<|| 6.   Exit                     ||>" << endl;
    cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
    cout << " ~~>  Enter Choice: ";
}

int Menu :: zodiacLocation(string zodiac){
    string zodiacList[12] = {"Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn", "Aquarius", "Pisces" };
    for (int i=0; i<12; i++){
        if (zodiac == zodiacList[i]){
            return i;
        }
    }
}

void Menu :: trivia(int zodiacIndex){
    int choice;
    while (true) {
        menuTrivia();
        cin >> choice;
        cout << endl;
        if (choice == 1) {
            f.textFile(zodiacIndex, 0);
        }
        else if (choice == 2) {
            f.textFile(zodiacIndex, 1);
        }
        else if (choice == 3) {
            f.textFile(zodiacIndex, 2);
        }
        else if (choice == 4) {
            f.textFile(zodiacIndex, 3);
        }
        else if (choice == 5) {
            f.textFile(zodiacIndex, 4);
        }
        else if (choice == 6) {
            f.textFile(zodiacIndex, 5);
        }
        else if (choice == 7) {
            f.textFile(zodiacIndex, 6);
        }
        else if (choice == 8) {
            f.textFile(zodiacIndex, 11);
        }
        else if (choice == 9) {
            break;
        }
        else if (choice == 10) {
            exit(0);
        }
        else {
            cout << endl << " ~~>  1-10 Only!" << endl << endl;
        }
    }
}

void Menu :: personality(int zodiacIndex){
    int choice;
    while (true) {
        menuPersonality();
        cin >> choice;
        cout << endl;
        if (choice == 1) {
            f.textFile(zodiacIndex, 7);
        }
        else if (choice == 2) {
            f.textFile(zodiacIndex, 8);
        }
        else if (choice == 3) {
            f.textFile(zodiacIndex, 12);
        }
        else if (choice == 4) {
            f.textFile(zodiacIndex, 13);
        }
        else if (choice == 5) {
            f.textFile(zodiacIndex, 14);
        }
        else if (choice == 6) {
            f.textFile(zodiacIndex, 15);
        }
        else if (choice == 7) {
            f.textFile(zodiacIndex, 16);
        }
        else if (choice == 8) {
            break;
        }
        else if (choice == 9) {
            exit(0);
        }
        else {
            cout << endl << " ~~>  1-9 Only!" << endl << endl;
        }
    }
}

void Menu :: love(int zodiacIndex) {
    int choice;
    while (true) {
        menuLove();
        cin >> choice;
        cout << endl;
        if (choice == 1) {
            f.textFile(zodiacIndex, 29);
        }
        else if (choice == 2) {
            f.textFile(zodiacIndex, 30);
        }
        else if (choice == 3) {
            f.textFile(zodiacIndex, 9);
        }
        else if (choice == 4) {
            loveCompatibility(zodiacIndex);
        }
        else if (choice == 5) {
            f.textFile(zodiacIndex, 31);
        }
        else if (choice == 6) {
            break;
        }
        else if (choice == 7) {
            exit(0);
        }
        else {
            cout << endl << " ~~>  1-7 Only!" << endl << endl;
        }
    }
}

void Menu :: loveCompatibility(int zodiacIndex){
    int choice, choice1;
    string name, zodiac;
    while (true) {
        p.view();
        cout << "Pick the Second Person: ";
        cin >> name;
        if (p.search(name)){
            zodiac = p.signName(name);
            int zodiacIndex2 = zodiacLocation(zodiac);
            if (zodiacIndex2 == 0){
                f.textFile(zodiacIndex, 17);
            }
            else if (zodiacIndex2 == 1){
                f.textFile(zodiacIndex, 18);
            }
            else if (zodiacIndex2 == 2){
                f.textFile(zodiacIndex, 19);
            }
            else if (zodiacIndex2 == 3){
                f.textFile(zodiacIndex, 20);
            }
            else if (zodiacIndex2 == 4){
                f.textFile(zodiacIndex, 21);
            }
            else if (zodiacIndex2 == 5){
                f.textFile(zodiacIndex, 22);
            }
            else if (zodiacIndex2 == 6){
                f.textFile(zodiacIndex, 23);
            }
            else if (zodiacIndex2 == 7){
                f.textFile(zodiacIndex, 24);
            }
            else if (zodiacIndex2 == 8){
                f.textFile(zodiacIndex, 25);
            }
            else if (zodiacIndex2 == 9){
                f.textFile(zodiacIndex, 26);
            }
            else if (zodiacIndex2 == 10){
                f.textFile(zodiacIndex, 27);
            }
            else if (zodiacIndex2 == 11){
                f.textFile(zodiacIndex, 28);
            }
            cout << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
            cout << "<|| 1.   Continue                 ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
            cout << "<|| 2.   Back                     ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
            cout << "<|| 3.   Exit                     ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
            cout << " ~~>  Enter Choice: ";
            cin >> choice1;
            cout << endl;
            if (choice1 == 2) {
                break;
            }
            else if (choice1 == 3){
                exit(0);
            }
        }
        else {
            cout << endl << " ~~>  Name Not Found!" << endl << endl;
        }
    }
}

void Menu :: friendshipCompatibility(int zodiacIndex){
    int choice, choice1;
    string name, zodiac;
    while (true) {
        p.view();
        cout << "Pick the Second Person: ";
        cin >> name;
        if (p.search(name)){
            zodiac = p.signName(name);
            int zodiacIndex2 = zodiacLocation(zodiac);
            if (zodiacIndex2 == 0){
                f.textFile(zodiacIndex, 32);
            }
            else if (zodiacIndex2 == 1){
                f.textFile(zodiacIndex, 33);
            }
            else if (zodiacIndex2 == 2){
                f.textFile(zodiacIndex, 34);
            }
            else if (zodiacIndex2 == 3){
                f.textFile(zodiacIndex, 35);
            }
            else if (zodiacIndex2 == 4){
                f.textFile(zodiacIndex, 36);
            }
            else if (zodiacIndex2 == 5){
                f.textFile(zodiacIndex, 37);
            }
            else if (zodiacIndex2 == 6){
                f.textFile(zodiacIndex, 38);
            }
            else if (zodiacIndex2 == 7){
                f.textFile(zodiacIndex, 39);
            }
            else if (zodiacIndex2 == 8){
                f.textFile(zodiacIndex, 40);
            }
            else if (zodiacIndex2 == 9){
                f.textFile(zodiacIndex, 41);
            }
            else if (zodiacIndex2 == 10){
                f.textFile(zodiacIndex, 42);
            }
            else if (zodiacIndex2 == 11){
                f.textFile(zodiacIndex, 43);
            }
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
            cout << "<|| 1.   Continue                 ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
            cout << "<|| 2.   Back                     ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
            cout << "<|| 3.   Exit                     ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
            cout << " ~~>  Enter Choice: ";
            cin >> choice1;
            cout << endl;
            if (choice1 == 2) {
                break;
            }
            else if (choice1 == 3){
                exit(0);
            }
        }
        else {
            cout << endl << " ~~>  Name Not Found!" << endl << endl;
        }
    }
}

void Menu :: friendship(int zodiacIndex) {
    int choice;
    while (true) {
        menuFriendship();
        cin >> choice;
        cout << endl;
        if (choice == 1) {
            f.textFile(zodiacIndex, 10);
        }
        else if (choice == 2) {
            friendshipCompatibility(zodiacIndex);
        }
        else if (choice == 3) {
            f.textFile(zodiacIndex, 45);
        }
        else if (choice == 4) {
            f.textFile(zodiacIndex, 44);
        }
        else if (choice == 5) {
            break;
        }
        else if (choice == 6) {
            exit(0);
        }
        else {
            cout << endl << " ~~>  1-6 Only!" << endl << endl;
        }
    }
}

void Menu :: astrology() {
    int choice, choice1;
    string name, zodiac;
    p.view();
    cout << " ~~>  Pick a Person: ";
    cin >> name;
    cout << endl;

    while(true){
        if (p.search(name)){
            zodiac = p.signName(name);
            int zodiacIndex = zodiacLocation(zodiac);
            menuAstrology();
            cin >> choice;
            cout << endl;
            if (choice == 1){
                trivia(zodiacIndex);
            }
            else if (choice == 2){
                personality(zodiacIndex);
            }
            else if (choice == 3){
                love(zodiacIndex);
            }
            else if (choice == 4){
                friendship(zodiacIndex);
            }
            else if (choice == 5){
                p.view();
                cout << " ~~>  Pick a Person: ";
                cout << endl;
                cin >> name;
                cout << endl;
            }
            else if (choice == 6){
                list();
                break;
            }
            else if (choice == 7){
                exit(0);
            }
            else {
                cout << endl << " ~~>  1-7 Only!" << endl << endl;
            }
        }
        else {
            cout << endl << " ~~>  Name Not Found!" << endl << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
            cout << "<|| 1.   Continue                 ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
            cout << "<|| 2.   Back                     ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl;
            cout << "<|| 3.   Exit                     ||>" << endl;
            cout << " %~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%~%" << endl << endl;
            cout << " ~~>  Enter Choice: ";
            cin >> choice;
            cout << endl;
            if (choice == 1) {
                p.view();
                cout << " ~~>  Pick a Person: ";
                cin >> name;
            }
            else if (choice == 2){
                list();
                break;
            }
            else if (choice == 3){
                exit(0);
            }
            else {
                cout << endl << " ~~>  1-3 Only!" << endl << endl;
            }
        }
    }
}

void Menu :: list() {
    int choice1, choice2, choice3;
    string name, day, month;
    while (true){
        menu();
        cin >> choice1;
        cout << endl;
        if (choice1 == 1) {
            cout << " ~~>  Enter Name: ";
            cin >> name;
            cout << endl << " ~~>  Enter Day: ";
            cin >> day;
            cout << endl << " ~~>  Enter Month: ";
            cin >> month;
            cout << endl;
            p.add(name, day, month);
        }
        else if (choice1 == 2) {
            cout << " ~~>  Enter Name: ";
            cin >> name;
            cout << endl;
            p.del(name);
        }
        else if (choice1 == 3) {
            p.view();
        }
        else if (choice1 == 4) {
            p.view();
            cout << " ~~>  Enter Name: ";
            cin >> name;
            cout << endl;
            p.edit(name);
        }
        else if (choice1 == 5) {
            astrology();
            break;
        }
        else if (choice1 == 6) {
            cout << "Good Bye" << endl;
            break;
        }
        else {
            cout << " ~~>  1-5 Only!" << endl << endl;
        }
    }
}