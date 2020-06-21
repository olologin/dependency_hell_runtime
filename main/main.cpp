#include "plugin1.hpp"
#include "plugin2.hpp"
#include <iostream>

int main()
{
    Plugin1::InvokePlugin();
    Plugin2::InvokePlugin();
    Plugin1::InvokePlugin();
    Plugin2::InvokePlugin();
}