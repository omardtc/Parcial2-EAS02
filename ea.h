#ifndef ea
#define ea
#include <bits/stdc++.h>
using namespace std;
class Figura{
private:
    int b, h;
    float a;

public:
    Figura();
    Figura(int b, int h);
    void setArea(float a);
    float getArea();
};

class Square: public Figura{
    public:
Square():Figura(){};
Square(int b):Figura(b, b){
    float x = b*b;
    setArea(x);
};
};

class Rectangle: public Figura{
    public:
Rectangle(int b, int h):Figura(b, h){
    float x = b*h;
    setArea(x);
};
};

class Triangle: public Figura{
    public:
    Triangle(int b, int h):Figura(b, h){
        float x = (b*h)/2;
        setArea(x);
    }
};
#endif