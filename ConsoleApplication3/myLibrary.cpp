#include "myLibrary.h"
#pragma once
#include <iostream>
using namespace std;

class PC
{
protected:

    string name;
    string cpu;
    string gpu;
    string ssd;
    string ram;
    double price;

public:

    PC() {}
    PC(string nm, string cp, string gp, string ss, string rm)
    {
        name = nm;
        cpu = cp;
        gpu = gp;
        ssd = ss;
        ram = rm;
        price = 0.0;
    }
    void Print()
    {
        cout << "Name: " << name << endl << "CPU: " << cpu << endl << "GPU: " << gpu << endl << "SSD: " << ssd << endl << "RAM: " << ram << endl;
    }
    virtual double GetPrice()
    {
        return price;
    }
};

class Office :public PC
{
private:

    string micro;

public:

    Office() {}
    Office(string nm, string cp, string gp, string ss, string rm, string mic) : PC(nm, cp, gp, ss, rm)
    {
        micro = mic;
    }
    void Print()
    {
        PC::Print();
        cout << "Micro: " << micro << endl;
    }
    double GetPrice()
    {
        price = 30000;
        return price;
    }
};

class Game :public PC
{
private:

    string keyboard;
    string headphones;

public:

    Game() {}
    Game(string nm, string cp, string gp, string ss, string rm, string kb, string hp) : PC(nm, cp, gp, ss, rm)
    {
        keyboard = kb;
        headphones = hp;
    }
    virtual void Print()
    {
        PC::Print();
        cout << "Keyboard: " << keyboard << endl;
        cout << "Headphones: " << headphones << endl;
    }
    virtual double GetPrice()
    {
        price = 90000;
        return price;
    }
};

class Home :public PC
{
private:

    string webCamera;

public:

    Home() {}
    Home(string nm, string cp, string gp, string ss, string rm, string wc) : PC(nm, cp, gp, ss, rm)
    {
        webCamera = wc;
        price = 40000;
    }
    virtual void Print()
    {
        PC::Print();
        cout << "Web-Camera: " << webCamera << endl;
    }
    virtual double GetPrice()
    {
        return price;
    }
};