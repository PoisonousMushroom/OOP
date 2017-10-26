#include <vector>
#include "Deck.h"
#include "Player.h"
#include "House.h"
#ifndef G
#define G

class Game
{
public:
    Game(const std::vector<std::string>& names);

    ~Game();

    //plays the game of blackjack
    void Play();

private:
    Deck m_Deck;
    House m_House;
    std::vector<Player> m_Players;
};

#endif // G
