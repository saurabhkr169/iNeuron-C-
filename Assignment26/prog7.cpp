/* 7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.*/
#include<iostream>
using namespace std;
class Box
{
    private:
      int l,b,h,v;
    public:
      Box(int x,int y,int z)
      {
         l = x;
         b = y;
         h = z;
      }
      void calVol()
      {
         v = l * b * h;
      }
      void printVol()
      {
         cout<<"Volume of Box is "<<v<<endl;
      }
};
int main()
{
    Box b1(10,20,30);
    b1.calVol();
    b1.printVol();
}