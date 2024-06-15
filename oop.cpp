#pragma once
#include <iostream>
using namespace std;
class Food
{
private:
    /* data */
    string name;
    double price;
public:
    Food() {}
    Food(string name,double price)
    {
        this->name=name;
        this->price=price;
    }
    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        return name;
    }
    void setPrice(double price)
    {
        this->price=price;
    }
    double getPrice()
    {
        return price;
    }
};

#include "Food.cpp"
#include <vector>
class CannedFood:public Food
{
private:
    int numberBox;
public:
    CannedFood() {}
    CannedFood(string name,double price,int numberBox):Food(name,price)
    {
        this->numberBox=numberBox;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Number box: "<<numberBox<<endl;
    }
    void setNumberBox(int numberBox)
    {
        this->numberBox=numberBox;
    }
    int getNumberBox()
    {
        return numberBox;
    }
    static void sortNumberBox(vector<CannedFood> vt)
    {
        for (int i=0;i<vt.size()-1;i++)
            for (int j=i+1;j<vt.size();j++)
                if (vt[i].numberBox >vt[j].numberBox)
                    swap(vt[i],vt[j]);
    }
};

#include "Food.cpp"
#include <vector>
class NonCFood :public Food
{
private:
    /* data */
    double weight;

public:
    NonCFood(/* args */) {}
    NonCFood(string name,double price, double weight):Food(name,price)
    {
        this->weight=weight;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Weight: "<<weight<<endl;
    }
    void setWeight(double weight)
    {
        this->weight=weight;
    }
    double getWeight()
    {
        return weight;
    }
    static void sortWeight(vector<NonCFood> vt)
    {
        for (int i=0;i<vt.size()-1;i++)
            for (int j=i+1;j<vt.size();j++)
                if (vt[i].weight >vt[j].weight)
                    swap(vt[i],vt[j]);
    }
};









