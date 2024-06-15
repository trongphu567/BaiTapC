#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point() {}
    Point(int x,int y)
    {
        this->x=x;
        this->y=y;

    }
    void setX(int x)
    {
        this->x=x;
    }
    int getX()
    {
        return x;
    }
    void setY(int y)
    {
        this->y=y;
    }
    int getY()
    {
        return y;
    }
    friend Point operator- (Point A,Point B)
    {
        return Point(A.x-B.x,A.y-B.y);
    }
    double distance (Point B)
    {
        return sqrt((this->x -B.x)*(this->x-B.x)+(this->y-B.y)*(this->y-B.y));
    }
    void display()
    {
        cout<<"X = "<<x<<" "<<"Y = "<<y<<endl;
    }
};

class Traingle :public Point
{
private:
    Point A;
    Point B;
    Point C;
public:
    Traingle() {}
    Traingle (Point A,Point B,Point C)
    {
        this->A=A;
        this->B=B;
        this->C=C;
    }
    void display()
    {
        A.display();
        B.display();
        C.display();
    }
    void setA(Point A)
    {
        this->A=A;
    }
    Point getA()
    {
        return A;
    }
    void setB(Point B)
    {
        this->B=B;
    }
    Point getB()
    {
        return B;
    }
    void setC()
    {
        this->C=C;
    }
    Point getC()
    {
        return C;
    }
    double perimeter()
    {
        return A.distance(B)+A.distance(C)+B.distance(C);
    }
    double area()
    {
        return abs((B.x-A.x) *(C.y-A.y) - (C.x-A.x)*(B.y-A.y))*0.5;
    }
    Point center()
    {
        return Point(double(A.x+B.x+C.x)/3,double(A.y+B.y+C.y)/3);
    }
    bool isTraingle()
    {
        double a=A.distance(B);
        double b=B.distance(C);
        double c=C.distance(A);
        if (a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0)
            return true;
        return false;
    }
};
