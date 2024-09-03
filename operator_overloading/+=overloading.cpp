#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<string>
#include<map>
using namespace std;
class test{
    int a;
    int b;
    public:
    test(int x=0, int y =0){
        a = x;
        b = y;
    }
    void print(){
        cout << a << " " << b << endl;
    }

    void fun(int bonus_marks){
        a += bonus_marks;
        b += bonus_marks;
    }
   friend void funny(test&, int );

};
void funny(test & obj, int red_marks){
obj.a -= red_marks;
obj.b -= red_marks;
}
int main(){
    test t1(80, 85), t2( 90, 95);
    t1.print(), t2.print();
    t1.fun(5);
    t1.print();
    funny(t2, 7);
    t2.print();
    return 0;
}