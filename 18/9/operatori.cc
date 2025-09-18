/*
x += y
x -= y 
x = x*y
x = x/y

x++ x+=1 fun(x++) -> fun(x); x+=1;
x-- x-=1
++x fun(++x) -> x+=1; fun(x);
--x
*/
#include <iostream>
using namespace std;
int main(){
    int x = 2,y1,y2;
    y1 = (x++); 
    x--;
    y2 = (++x);
    bool maggiore = 5>6;
    return 0;
}
