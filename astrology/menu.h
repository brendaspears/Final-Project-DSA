//
// Created by Brenda Spears on 2019-06-30.
//

#ifndef ASTROLOGY_MENU_H
#define ASTROLOGY_MENU_H

#include "function.h"
#include "person.h"

class Menu {

private:

    Person p;       // Declaring

    Function f;     // Declaring

public:

    void menu();        // Output The Main Menu List

    void menuAstrology();       // Output The Astrology Menu List

    void menuTrivia();      // Output The Trivia Menu List

    void menuPersonality();     // Output The Personality Menu List

    void menuLove();        // Output The Love Menu List

    void menuFriendship();      // Output The Friendship Menu List

    int zodiacLocation(string zodiac);      // Returns The Index of The Zodiacs For The Text Files.

    void trivia(int zodiacIndex);       // Nested If For User Input if "Trivia" is Picked [ Getting data from the vector ]

    void personality(int zodiacIndex);      // Nested If For User Input if "Personality" is Picked [ Getting data from the vector ]

    void love(int zodiacIndex);      // Nested If For User Input if "Love" is Picked [ Getting data from the vector ]

    void loveCompatibility(int zodiacIndex);      // Nested If For User Input if "Love Compatibility" is Picked [ Getting data from the vector ]

    void friendshipCompatibility(int zodiacIndex);      // Nested If For User Input if "Friendship Compatibility" is Picked [ Getting data from the vector ]

    void friendship(int zodiacIndex);      // Nested If For User Input if "Friendship" is Picked [ Getting data from the vector ]

    void astrology();      // Nested If For User Input if "Astrology" is Picked

    void list();      // Nested If For "List" Where User Deals With the "Person"'s Detail (name, birthdate, birthmonth, zodiac)
};

#endif //ASTROLOGY_MENU_H
