//
//  character.hpp
//  Coup
//
//  Created by Harry Prudden on 28/12/2020.
//

#ifndef character_hpp
#define character_hpp

#include <memory>
#include <stdio.h>

enum CHARACTER_TYPE {CAPTAIN, AMBASSADOR, DUKE, CONTESSA, ASSASSIN };

class Character
{
public:
    Character(CHARACTER_TYPE character) : m_character(character) {}
    
    virtual ~Character() = 0;
    
    virtual std::unique_ptr<Character> clone() const = 0;
    
    virtual bool canSteal() const = 0;
private:
    CHARACTER_TYPE m_character;
};

#endif /* character_hpp */
