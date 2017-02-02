#include<iostream>

using namespace std;

//base class
class shape{
public:
  void setWidth(int w){
    width=w;
  }
  void setHeight(int h){
    height=h;
  }
protected:
  int width;
  int height;
};

//Derived class
class Rectangle: public shape{
public:
  int getArea(){
    return(width * height);
  }
};

int main(){
  Rectangle Rect;
  Rect.setWidth(5);
  Rect.setHeight(7);

  //print the area of the object.
  cout<<"Total Area: "<<Rect.getArea()<<endl;

  return 0;
}
