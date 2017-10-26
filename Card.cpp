#include <iostream>
#include "Card.h"
using namespace std;
Card::Card(rank r, suit s, bool ifu):  m_Rank(r), m_Suit(s), m_IsFaceUp(ifu)
{}

int Card::GetValue() const
{
	int value;
    if(m_IsFaceUp==false)
        value=0;
    else
    {
        switch(m_Rank)
        {
        case JACK:
        case QUEEN:
        case KING:
            value=10;
            break;
        case ACE:
            value=1;
            break;
        case TWO:
            value=2;
            break;
        case THREE:
            value=3;
            break;
        case FOUR:
            value=4;
            break;
        case FIVE:
            value=5;
            break;
        case SIX:
            value=6;
            break;
        case SEVEN:
            value=7;
            break;
        case EIGHT:
            value=8;
            break;
        case NINE:
            value=9;
            break;
        case TEN:
            value=10;
            break;
        default:
            break;
        }
    }
	return value;
}

void Card::Flip()
{
    m_IsFaceUp = !(m_IsFaceUp);
}
