//
//  game.cpp
//  Coup
//
//  Created by Harry Prudden on 29/12/2020.
//

#include "game.hpp"
#include "captain.hpp"

Game::Game(int nPlayers)
{
    initGame(nPlayers);
}

Game::~Game() {}

void Game::initGame(int nPlayers)
{
    for (int i = 0; i < nPlayers; i++)
    {
        auto influence1 = m_deck.drawCard();
        auto influence2 = m_deck.drawCard();
        
        m_players.push_back(Player(i, *this, std::move(influence1), std::move(influence2)));
    }
}

void Game::steal()
{
    
}
