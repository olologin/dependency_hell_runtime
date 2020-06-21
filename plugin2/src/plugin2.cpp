#include "plugin2.hpp"
#include "lib.hpp"
#include <iostream>


namespace Plugin2
{
void InvokePlugin()
{
    std::cout<<GetVersionInfo()<<std::endl;
}
}

extern "C"
{
    void InvokePlugin2C()
    {
        Plugin2::InvokePlugin();
    }
}