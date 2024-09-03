// how can we write functions, which we will use to do ++ -- operator overloading in post-icrement or post decremene manner.

#include <iostream>
using namespace std;

class marks{
    int a;
    int b;
    public:
    marks(int a =0, int b=0){
       this-> a = a;
       this-> b = b;
    }
    void print(){
        cout << a<< " "<< b<<endl;
    }
    marks add(){
        marks temp = *this;
        this->a+=1;
        this->b+=1;
        return *this;
    }
    friend marks sub(marks);
};

marks sub(marks obj){
    marks temp = obj;
    temp.a -= 1;
    temp.b -= 1;
    return temp;
}

int main() {
   marks s1(10, 20);
   marks s2(15, 25);
   s1.print(), s2.print();
   marks s3 = s1.add();
   s3.print();
   
   marks s4 = sub(s2);
   s4.print();

    return 0;
}
