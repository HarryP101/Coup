//
//  game.hpp
//  Coup
//
//  Created by Harry Prudden on 29/12/2020.
//

#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include <vector>
#include "player.hpp"
#include "deck.hpp"

class Game
{
public:
    Game(int nPlayers);
    
    ~Game();
    
    void steal();
    
private:
    void initGame(int nPlayers);
    
    std::vector<Player> m_players;
    
    Deck m_deck;
};

#endif /* game_hpp */
