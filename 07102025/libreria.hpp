#ifndef libreria //if not defined
/*checks that the library MYLIB_HPP does not already exist in 
the current scope to avoid duplicate definitions, if not the code continues.
This is called an include guard*/

#define libreria

//function declaration
//int add(int a, int b);
//ends the include guard

namespace additions {
    int add(int x, int y);
}
#endif 
