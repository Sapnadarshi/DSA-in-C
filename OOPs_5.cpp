#include <iostream>

using namespace std;

class calculation{
  protected:float result;
  public: virtual void areacalculate()=0;
};

class circle:public calculation{
  private:float radius;
  public:float get_radius(){return radius;}
  void areacalculate(){
      cout<<"Enter Radius"<<endl;
      cin>>radius;
      result=3.14*get_radius()*get_radius();
      display();
  }
  void display(){
      cout<<"Area "<<result<<endl;
  }
};
class rectangle:public calculation{
  private:int len,bre;
  public:int get_area(){return len*bre;}
  void areacalculate(){
      cout<<"Enter Length"<<endl;
      cin>>len;
      cout<<"Enter Breadth"<<endl;
      cin>>bre;
      result=get_area();
      display();
  }
  void display(){
      cout<<"Area "<<result<<endl;
  }
};

int main(){
    calculation*c;
    circle c1;
    c=&c1;
    c->areacalculate();
    
    rectangle c2;
    c=&c2;
    c->areacalculate();
}
