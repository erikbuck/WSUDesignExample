//
//  InsertCharacterCommand.hpp
//  
//
//  Created by Erik M. Buck on 2/25/21.
//

#ifndef InsertCharacterCommand_hpp
#define InsertCharacterCommand_hpp

#include "Command.hpp"

namespace WSU {
namespace Model {

class InsertCharacterCommand : public Command {
public:
   virtual void run() = 0;

};

} // namespace Model
} // namespace WSU

#endif /* InsertCharacterCommand_hpp */
