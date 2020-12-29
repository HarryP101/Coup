//
//  captain.cpp
//  Coup
//
//  Created by Harry Prudden on 29/12/2020.
//

#include "captain.hpp"
#include "character.hpp"

Captain::Captain() : Character(CHARACTER_TYPE::CAPTAIN) {}

Captain::~Captain() {}

bool Captain::canSteal() const
{
    return true;
}

// Using clone for polymorphism. Will try this with the pimpl idiom at some point as well
std::unique_ptr<Character> Captain::clone() const
{
    return std::make_unique<Captain>(*this);
}
