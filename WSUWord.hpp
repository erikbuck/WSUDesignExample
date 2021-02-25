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

/// This entire project is part of a demonstration for Wright State University (WSU) CSE-4110 "Intro. Software Eng." Spring 2021.
namespace WSU {

/// Model Model Subsystem
///
/// This Module contains components that are part of the @ref Model within the overall @ref ModelViewPresenter Design.
namespace Model {

/// \imp \ref R1_0 This class implements the core of the Model subsystem with methods to manipulate a stored string.
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


} // namespace Model
} // namespace WSU

#endif /* WSUWord_hpp */
