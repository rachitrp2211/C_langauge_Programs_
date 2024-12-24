#include <iostream>
using namespace std;
class C {
  int r, img;

public:
  void sdata(int x, int y) {
    r = x;
    img = y;
  }
  void gdata() {
    cout << "The Real no. is " << r << endl << "The img no. is " << img << endl;
  }
};
int main() {
  C c1;
  C *ptr = new C;
  (*ptr).sdata(22, 11);
  (*ptr).gdata(); // GETTING THE DATA USING THE                         POINTER
  ptr->sdata(22, 11);
  ptr->gdata(); // GETTING DATA USING THE ARROW                       OPERATOR
  c1.sdata(22, 11);
  c1.gdata(); // GETTING DATA USING THE OBJECT
}