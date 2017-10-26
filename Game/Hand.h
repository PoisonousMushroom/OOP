#include "Card.h"
#include <vector>
#ifndef H
#define H

class Hand
{
public:
    Hand();

    virtual ~Hand();

    //adds a card to the hand
    void Add(Card* pCard);

    //clears hand of all cards
    void Clear();

    //gets hand total value, intelligently treats aces as 1 or 11
    int GetTotal() const;

protected:
    std::vector<Card*> m_Cards;
};
#endif // H
