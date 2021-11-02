#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    CP::list<int> x, a, b;
    x.push_back(1);
    x.push_back(7);
    x.push_back(9);
    x.push_back(10);
    x.push_back(2);
    x.push_back(6);
    x.push_back(3);

    a.push_back(1);
    a.push_back(2);

    b.push_back(3);
    b.push_back(4);
    b.push_back(5);
    // int m,n,o;
    // cin >> m >> n >> o;
    // int tmp;
    // while (m--) {
    //     cin >> tmp;
    //     x.push_back(tmp);
    // }
    // while (n--) {
    //     cin >> tmp;
    //     a.push_back(tmp);
    // }
    // while (o--) {
    //     cin >> tmp;
    //     b.push_back(tmp);
    // }

    x.splitList(a, b);
    cout<<"x is"<<endl;
    x.print();
    cout<<"a is"<<endl;
    a.print();
    cout<<"b is"<<endl;
    b.print();
    return 0;
}
