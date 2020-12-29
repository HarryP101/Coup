//
//  captain.hpp
//  Coup
//
//  Created by Harry Prudden on 29/12/2020.
//

#ifndef captain_hpp
#define captain_hpp

#include <memory>
#include <stdio.h>
#include "character.hpp"

class Captain : public Character
{
public:
    Captain();
    virtual ~Captain();
    
    virtual bool canSteal() const override;
    
    virtual std::unique_ptr<Character> clone() const override;
};
#endif /* captain_hpp */
