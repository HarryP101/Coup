//
//  deck.cpp
//  Coup
//
//  Created by Harry Prudden on 29/12/2020.
//

#include <memory>
#include "deck.hpp"
#include "captain.hpp"

Deck::Deck()
{
    initDeck();
}

Deck::~Deck()
{
    
}

void Deck::initDeck()
{
    for (int i = 0; i < 15; i++)
    {
        auto influence = Captain();
        m_cards.push_back(influence.clone());
    }
}

std::unique_ptr<Character> Deck::drawCard()
{
    static int cardsInPlay = 0;
    return std::move(m_cards[cardsInPlay++]);
}
