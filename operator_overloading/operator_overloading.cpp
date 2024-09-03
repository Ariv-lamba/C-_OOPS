
#include <iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    
    complex(int r =0, int i = 0){
        real = r;
        img = i;
    }
    
  complex operator * ( complex obj){
      complex temp;
      temp.real = real + obj.real;
      temp.img = img + obj.img;
      return temp;
  }
  
  void print(){
      cout << real << " "<< img<<endl;
  }
};
int main() {
  complex c1(10, 20);
  complex c2(15, 25);
  c1.print();
  c2.print();
  //complex c = c1.add(c2);
  //c.print();
  complex c3 = c1 * c2;
  c3.print();

    return 0;
}