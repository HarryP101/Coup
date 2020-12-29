//
//  deck.hpp
//  Coup
//
//  Created by Harry Prudden on 29/12/2020.
//

#ifndef deck_hpp
#define deck_hpp

#include <iostream>
#include <stdio.h>
#include <memory>
#include <vector>
#include "deck.hpp"
#include "character.hpp"

// Class to simulate a deck of 15 characters, 5 of each. Upon initalisation, each of the 15 characters are added in a random order
class Deck
{
public:
    Deck();
    
    ~Deck();

    std::unique_ptr<Character> drawCard();
    
private:
    void initDeck();
    std::vector<std::unique_ptr<Character>> m_cards;
};
#endif /* deck_hpp */
