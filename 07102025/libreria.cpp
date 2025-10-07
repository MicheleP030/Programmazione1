#include "libreria.hpp"
//if I had another add function inside the main file when the linker tries to link insieme the files it throws an error 
/*
int add(int a, int b) {
    return a + b;
}
*/
// to avoid this issue we can use namespaces in order to differentiate between functions using the same name
//we would then need to modify the header file to fit the new library
namespace additions {

    int add(int a, int b) {
        return a + b;
    }
}