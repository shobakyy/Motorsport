#include<iostream>
using namespace std;

class rectangle
{
private:
    float length;
    float width;
public:
    void setlength(float l)
    {
        if(l >=0)
        length =l;
        else
        std::cout <<"error ,please enter only postive";

    }
    float getlength()
    {
        return length ;
    }
    void setwidth(float w)
    {
        if(w >=0)
        width =w;
        else
        cout <<"error ,please enter only postive";

    }
    float getwidth()
    {
        return width ;
    }
    float getarea()
    {
        return length*width;
    }
};


 int main()
 {
    rectangle box;
    box.setlength(50.4);
    box.setwidth(30.6);
    cout<<"the rectangle area is " <<box.getarea() <<"\n";


    return 0; 
 }