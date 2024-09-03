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
    test(int a=0, int b =0){
        this->a = a;
        this->b = b;
    }
    void print(){
        cout << a << " " << b << endl;
    }

     void operator ++ (){
        a = a+1;
        b = b+1;
    }

     friend void operator -- (test&);
};
void operator--(test &obj){
    obj.a--;
    obj.b--;

}
int main(){
    test t1(67, 83), t2(91, 93);
    t1.print();
    t2.print();
    

    ++t1;
    --t2;
    t1.print();
    t2.print();
return 0;
}