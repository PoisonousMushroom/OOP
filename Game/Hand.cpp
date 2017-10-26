#include <algorithm>
#include "Hand.h"
#include <vector>
#include "Card.h"

Hand::Hand()
{
    m_Cards.reserve(7);
}

Hand::~Hand()
{
    Clear();
}

void Hand::Add(Card* pCard)
{
    m_Cards.push_back(pCard);
}

void Hand::Clear()
{
    //iterate through vector, freeing all memory on the heap
    std::vector<Card*>::iterator iter = m_Cards.begin();
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
        delete *iter;
        *iter = 0;
    }
    //clear vector of pointers
    m_Cards.clear();
}

int Hand::GetTotal() const
{
	int total;
	int v=0;
    for (std::size_t i=0;i<m_Cards.size();++i)
    {
        if(i==0)total=0;
        v=m_Cards[i]->GetValue();
        if(v==1&&total+11<21)
        {
            total+=11;
        }
        else
        {
            total+=v;
        }
    }
    return total;
}
