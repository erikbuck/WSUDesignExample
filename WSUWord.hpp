//
//  WSUWord.hpp
//  
//
//  Created by Erik M. Buck on 2/23/21.
//

#ifndef WSUWord_hpp
#define WSUWord_hpp

#include <string>

namespace WSUWord {

///
/// \defgroup Model Model Subsystem
/// @{
///  The subsystems of the application, WSUWord, are organized according the Model-View-Controller design. This Module contains components that are part of the Model subsystem.

/// Ref: Req. 1.0
class WSUWordModel {
   /// Ref: Req. 1.0
   std::string m_string;
};


/**@}*/

} // namespace WSUWord

#endif /* WSUWord_hpp */
