#include <stdlib.h>
#include <dlfcn.h>

#include <iostream>

int main()
{
    void (*f1)(void);
    void (*f2)(void);
    
    /*void* handle1 = dlopen("/media/sda1/playground/shared_symbols_test/build/bin/libplugin1.so", RTLD_LAZY|RTLD_LOCAL);
    f1 = (void (*)(void))dlsym(handle1, "InvokePlugin1C");
    f1();

    void* handle2 = dlopen("/media/sda1/playground/shared_symbols_test/build/bin/libplugin2.so", RTLD_LAZY|RTLD_LOCAL);
    f2 = (void (*)(void))dlsym(handle2, "InvokePlugin2C");
    f2();
    f1();
    f2();
    */

    void* handle1 = dlmopen(LM_ID_NEWLM, "/media/sda1/playground/shared_symbols_test/build/bin/libplugin1.so", RTLD_LAZY|RTLD_LOCAL);
    f1 = (void (*)(void))dlsym(handle1, "InvokePlugin1C");

    void* handle2 = dlmopen(LM_ID_NEWLM, "/media/sda1/playground/shared_symbols_test/build/bin/libplugin2.so", RTLD_LAZY|RTLD_LOCAL);
    f2 = (void (*)(void))dlsym(handle2, "InvokePlugin2C");
    f1();
    f2();
    f1();
    f2();
}