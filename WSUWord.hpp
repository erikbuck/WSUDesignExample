//
//  WSUWord.hpp
//  
//
//  Created by Erik M. Buck on 2/23/21.
//

#ifndef WSUWord_hpp
#define WSUWord_hpp

#include <string>
#include <cstdint>

namespace WSUWord {

///
/// \defgroup Model Model Subsystem
/// @{
///  The subsystems of the application, WSUWord, are organized according the Model-View-Controller design. This Module contains components that are part of the Model subsystem.

/// Ref: Req. 1.0
class WSUWordModel {
private:
   /// Ref: Req. 1.0
   /// Ref: Req. 1.1
   std::string m_string;
   
public:
   /// Ref: Req. 1.2
   void appendCharacter(char c);
   
   /// Ref: Req. 1.3
   /// Ref: Req. 1.3.1 The character, c, is inserted into the stored string at index.
   /// Ref: Req. 1.3.2 All characters already in the at index and beyond are moved to the next index to make room for c.
   void insertCharacterAtIndex(char c, int32_t index)
};


/**@}*/

} // namespace WSUWord

#endif /* WSUWord_hpp */
