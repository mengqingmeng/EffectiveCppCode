#include <iostream>
int main(){

    const int MAX_AGE = 90;
    const int* a = new int;
    //*a = 2;

    a = &MAX_AGE;

    std::cout << "a=" << *a << std::endl;

    return 1;
}
