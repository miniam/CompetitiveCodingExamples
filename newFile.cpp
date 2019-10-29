#include <iostream>

//cplusplus uses distructors to be used for

int main(){
    int i = 15; // i is a variable
    int *h=&i;
    int j = i;
    std::cout<<j<<std::endl;
    std::cout<<h<<std::endl;
    std::cout<<i<<std::endl;
    std::cout<<&i<<std::endl;

}
