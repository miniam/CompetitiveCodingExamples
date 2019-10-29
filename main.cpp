#include <iostream>
#include <algorithm>
#include <vector>
//inline function are the function which are used to
using namespace std;
class chetan{
    int a,b,c=0;
public:
    chetan(int d,int g):a{d},b{g}{};
    void display(){
        cout<<"d"<<a<<"a"<<b<<endl;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    //chetan gh=*new chetan(56,45);
   // (*new chetan(67,56)).display();
   vector<int> vec;
   vec.push_back(45);
   vec.resize(8,100);
   for(int i=0;i<vec.size();i++){
       cout<<vec[i]<<endl;
   }
   return 0;
}
