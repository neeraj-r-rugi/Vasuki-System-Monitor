#include "main.h"

int main(){
    char * test = "Hello Vasuki!\n";
    printf("%s", test);
    #ifdef _WIN32
        system("timeout/ T3 > null");
    #else
        system("sleep 3");
    #endif
    return 0;
}