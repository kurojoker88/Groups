#include <iostream>
using namespace std;
class Group{
    //
public:    
    int girls;
    int boys;
    
    int total();
    
    Group(int a = 0, int b=0){
        girls = a;
        boys = b;
    }
    
    
    ~Group(){cout <<"Group was killed\n";}
};

int Group::total(){
    return girls+boys;
    }