// Engine.h
#include <iostream>
class Engine
{
public:
  virtual void run() = 0;
  void version()
  {
    std::cout << "Version 1.0" << std::endl;
  }
};