#include "plugin1.hpp"
#include "lib.hpp"
#include <iostream>


namespace Plugin1
{
void InvokePlugin()
{
    std::cout<<GetVersionInfo()<<std::endl;
}
}