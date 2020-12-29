//
//  player.cpp
//  Coup
//
//  Created by Harry Prudden on 28/12/2020.
//

#include "player.hpp"
#include "game.hpp"

Player::Player(int id, Game& game, std::unique_ptr<Character> influence1, std::unique_ptr<Character> influence2) : m_id(id), m_game(game), m_influence1(std::move(influence1)), m_influence2(std::move(influence2)) {}


void Player::action()
{
    // Switch statement here for the different actions performed
    m_game.steal();
}
