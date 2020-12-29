//
//  player.hpp
//  Coup
//
//  Created by Harry Prudden on 28/12/2020.
//

#ifndef player_hpp
#define player_hpp

#include <stdio.h>
#include "character.hpp"

class Game;

class Player
{
public:
    Player(int id, Game& game, std::unique_ptr<Character> influence1, std::unique_ptr<Character> influence2);
    
    void action();
    
private:
    int m_id;
    Game& m_game;
    std::unique_ptr<Character> m_influence1;
    std::unique_ptr<Character> m_influence2;
};

#endif /* player_hpp */
