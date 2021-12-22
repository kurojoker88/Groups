#include <iostream>
#include "group.h"
using namespace std;

Group SummGroups(Group a, Group b){
    Group c;
    c.girls = a.girls + b.girls; 
    c.boys = a.boys + b.boys;
    return c;
} 

int main()
{
    Group group1(12, 13), group2(14,8);    // объявление двух групп
    cout << group1.girls << "\n";    // число девушек
    cout << group1.boys << "\n";    // число юношей
    cout << group1.total() << "\n";    // число учащихся первой группы
    cout << group2.total() << "\n";    // число учащихся второй группы
    cout << SummGroups(group1, group2).total() << "\n";    // общее число

    return 0;
}

