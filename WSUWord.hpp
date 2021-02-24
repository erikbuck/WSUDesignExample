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

namespace WSU {

///
/// \defgroup Model Model Subsystem
/// @{
///  This Module contains components that are part of the @ref Model within the overal @ref ModelViewPresenter Design.

/// \imp \ref R1_0 This class implements the core of the Model subsystem with methods to manipuate a stored string.
class WordModel {
private:
   /// \imp \ref R1_0
   /// \imp \ref R1_1
   std::string m_string;
   
public:
   /// \imp \ref R1_2
   void appendCharacter(char c);
   
   /// \imp \ref R1_3
   /// \imp \ref R1_3_1 The character, c, is inserted into the stored string at index.
   /// \imp \ref R1_3_2  All characters already in the at index and beyond are moved to the next index to make room for c.
   void insertCharacterAtIndex(char c, int32_t index);
};


///@}

} // namespace WSU

#endif /* WSUWord_hpp */
