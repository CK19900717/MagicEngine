// Engine.h
#include <iostream>
#include <string>
class Engine
{
public:
  virtual void run() = 0;
  std::string version()
  {
    return "Version 1.0";
  }
};