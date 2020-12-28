//
//  character.hpp
//  Coup
//
//  Created by Harry Prudden on 28/12/2020.
//

#ifndef character_hpp
#define character_hpp

#include <stdio.h>

enum CHARACTER_TYPE {Captain, Ambassador, Duke, Contessa, Assassin };

class Character
{
public:
    Character(CHARACTER_TYPE character) : m_character(character) {}
    
    virtual ~Character() = 0;
private:
    CHARACTER_TYPE m_character;
};

#endif /* character_hpp */
