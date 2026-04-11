#include<iostream>
#include<string>

using namespace std;

class car
{
private:
    string maker;
    int model;
    string color;

public:
  void setmaker(string m);
  string getmaker();
  void setmodel(int m);
  int getmodel();
};

void car::setmaker(string m)
{
    maker = m;
}

string car::getmaker()
{
    return maker;
}

void car::setmodel(int m)
{
    model = m;
}

int car::getmodel()
{
    
    return model;
}

int main()
{
    car c1;
    c1.setmaker("honda");
    c1.setmodel(2004);
    
    cout<<"this car made by " <<c1.getmaker() <<"\n" ;
    cout<<"this car made by " <<c1.getmodel() <<"\n" ;
}
