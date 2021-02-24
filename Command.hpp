//
//  Command.hpp
//  
//
//  Created by Erik M. Buck on 2/24/21.
//

#ifndef Command_hpp
#define Command_hpp

#include <memory>
#include <unordered_map>
#include <functional>

class Command {
public:
   typedef std::shared_ptr<Command> ptr_t;
   typedef std::unordered_map<std::string, std::string> arguments_t;
   typedef std::function<ptr_t ()> commandFactory_t;

protected:
   virtual ~Command() { /* Intentionally Empty */ }
   
   virtual bool init(arguments_t args) = 0;
   virtual void run() = 0;
   virtual ptr_t makeRecipricalCommand() = 0;
   virtual std::string getStringRepresentation() = 0;

public:
   void operator() () {
      run();
   }
   
   static void registerCommandFactoryWithName(commandFactory_t, std::string name);
   static ptr_t makeCommandWithName(std::string name);
};

#endif /* Command_hpp */
