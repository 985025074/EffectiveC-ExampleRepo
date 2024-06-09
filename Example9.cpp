//Dont call virtuaal function in father's constructor or destructor.they aren't dervied's!
#include <iostream>
#include <string>
using namespace std;
class Book{
protected:
    virtual void logToLib(string name){
        cout<<name<<" log"<<endl;
    }
    Book(string name){
        cout<<"Book Created"<<endl;
        logToLib(name);//Dont'call virutal in constructor.

    }
};
class MathBook:public Book{
public:
    MathBook(string name):Book(name){
    }
    void logToLib(string name) override{
        cout<<"Math Book:"<<name<<endl;
    }
};
int main()
{
    MathBook book("Effective C++");

    return 0;
}