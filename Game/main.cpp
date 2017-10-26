//Blackjack
/*
CH08-320143
a5_p4.cpp
Oana Miron
o.miron@jacobs-university.de
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Card.h"
#include "GenericPlayer.h"
using namespace std;

//function prototypes
ostream& operator<<(ostream& os, const Card& aCard);
ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);

//overloads << operator so Card object can be sent to cout
ostream& operator<<(ostream& os, const Card& aCard)
{
    const string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9",
                            "10", "J", "Q", "K"};
    const string SUITS[] = {"c", "d", "h", "s"};

    if (aCard.m_IsFaceUp)
    {
        os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else
    {
        os << "XX";
    }

    return os;
}

//overloads << operator so a GenericPlayer object can be sent to cout
ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer)
{
    os << aGenericPlayer.m_Name << ":\t";

    vector<Card*>::const_iterator pCard;
    if (!aGenericPlayer.m_Cards.empty())
    {
        for (pCard = aGenericPlayer.m_Cards.begin();
             pCard != aGenericPlayer.m_Cards.end();
             ++pCard)
        {
            os << *(*pCard) << "\t";
        }


        if (aGenericPlayer.GetTotal() != 0)
		{
            cout << "(" << aGenericPlayer.GetTotal() << ")";
		}
    }
    else
    {
        os << "<empty>";
    }

    return os;
}
